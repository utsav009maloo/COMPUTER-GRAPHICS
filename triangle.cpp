#include"graphics.h"

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    setcolor(RED);
    int tri_point[] = {180,200,300,200,240,100,180,200};
    drawpoly(4,tri_point);
    fillpoly(4, tri_point);
    delay(50000);
    closegraph();

}