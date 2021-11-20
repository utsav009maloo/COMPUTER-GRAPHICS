#include<stdio.h>
#include"graphics.h"
int main(){
    int i;
    int graphdriver = DETECT, graphmode;
    initgraph(&graphdriver, &graphmode,  NULL);
    setcolor(RED);
    line(100, 200, 100, 350);
    setcolor(BLUE);
    circle(550,50,30);
    setcolor(WHITE);
    arc(200,140,90,180,40);
    setcolor(YELLOW);
    ellipse(400,40,0,360,50,30);
    setcolor(GREEN);
    rectangle(180,200,400,400);
    setcolor(CYAN);
    outtextxy(500, 350, "UTSAV MALOO");
    delay(500000);
    closegraph();
    return 0;
}