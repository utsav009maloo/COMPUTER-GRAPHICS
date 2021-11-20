  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>

  /* twinkle stars in the sky */
  void stars(int c1, int c2, int c3) {
        int i, x[2], y[2], z[2];

        x[0] = 10, x[1] = 10;
        y[0] = 10, y[1] = 50;
        z[0] = 10, z[1] = 90;

        setlinestyle(SOLID_LINE, 1, 5);

        for (i = 0; i < getmaxx() - 100; i = i + 10) {
                /*
                 * placing pixels at alternate
                 * position to get twinkling effect
                 */
                if (i % 20 == 0) {
                        setcolor(c1);
                        putpixel(x[0] + i * 10, x[1] + 15, c1);

                        setcolor(c2);
                        putpixel(y[0] + i * 7, y[1] + 25, c2);

                        setcolor(c3);
                        putpixel(z[0] + i * 12, z[1] + 35, c3);
                } else {
                        setcolor(c1);
                        putpixel(x[0] + i * 12, x[1], c1);

                        setcolor(c2);
                        putpixel(y[0] + i * 10, y[1], c2);

                        setcolor(c3);
                        putpixel(z[0] + i * 7, z[1], c3);
                }
        }

  }


  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode, err;
        int i, midx, midy, poly[10];

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
        err = graphresult();

        if (err != grOk) {
                /* error occurred */
                printf("Graphics Error: %s",
                                grapherrormsg(err));
                getch();
                return 0;
        }

        /* mid position in x and y - axis */
        midx = getmaxx() / 2;
        midy = getmaxy() / 2;

        /* drawing the ground */
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        rectangle(0, midy + 175, getmaxx(), getmaxy());
        floodfill(getmaxx() - 1, getmaxy() - 2, WHITE);

        /* wall of the house */
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        rectangle(midx - 100, midy + 25, midx + 100, midy + 175);
        floodfill(midx - 98, midy + 27, DARKGRAY);

        /* top of the house */
        setcolor(LIGHTRED);
        setfillstyle(SOLID_FILL, LIGHTRED);
        poly[0] = midx - 125, poly[1] = midy + 25;
        poly[2] = midx + 125, poly[3] = midy + 25;
        poly[4] = midx + 75, poly[5] = midy - 25;
        poly[6] = midx - 75, poly[7] = midy - 25;
        poly[8] = midx - 125, poly[9] = midy + 25;
        drawpoly(5, poly);
        floodfill(midx, midy, LIGHTRED);

        setcolor(BLACK);
        drawpoly(5, poly);

        poly[0] = midx - 75, poly[1] = midy - 25;
        poly[2] = midx + 75, poly[3] = midy - 25;
        poly[4] = midx, poly[5] = midy - 100;
        poly[6] = midx - 75, poly[7] = midy - 25;

        setcolor(LIGHTRED);
        drawpoly(4, poly);
        floodfill(midx, midy - 95, LIGHTRED);

        setcolor(BLACK);
        drawpoly(4, poly);

        /* door for the house */
        setcolor(WHITE);
        setfillstyle(SLASH_FILL, WHITE);
        rectangle(midx, midy + 110, midx + 25, midy + 175);
        floodfill(midx + 1, midy + 112, WHITE);

        setfillstyle(BKSLASH_FILL, WHITE);
        rectangle(midx - 25, midy + 110, midx, midy + 175);
        floodfill(midx - 23, midy + 112, WHITE);

        /* window for the house */
        setfillstyle(LINE_FILL, WHITE);
        rectangle(midx + 25, midy + 50, midx + 75, midy + 90);
        floodfill(midx + 27, midy + 55, WHITE);

        /* drawing the moon */
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(getmaxx() - 75, 75, 35);
        floodfill(getmaxx() - 75, 75, YELLOW);

        /* twinkle stars in the sky */
        for (i = 0; i < 100; i++) {
                if (i % 3 == 0) {
                        stars(WHITE, WHITE, BLACK);
                } else if (i % 2 == 0) {
                        stars(WHITE, BLACK, WHITE);
                } else {
                        stars(BLACK, WHITE, WHITE);
                }
                delay(200);
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();
        return 0;
  }