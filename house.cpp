//Program to create a house 

#include"graphics.h"
int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);

//making sun
setcolor(YELLOW);
circle(70, 100, 30);
floodfill(70,100,RED);

//making house structure

//creating triangle of red color
setcolor(RED);
int tri_point[] = {180,200,300,200,240,100,180,200};
drawpoly(4,tri_point);
fillpoly(4, tri_point);

//create paralleogram of grey color
setcolor(8);
int pgram_point[] = {240,100,300,200,500,200,450,100,240,100};
drawpoly(5,pgram_point);
fillpoly(5, pgram_point);


//this is rectange of blue color
setcolor(BLUE);
rectangle(180,200,500,400);
int point[]={180,200,180,400,500,400,500,200};
fillpoly(4, point);
setcolor(8);
rectangle(297,200,302,400);
floodfill(299,202,RED);

//creating door of brown color
setcolor(BROWN);
rectangle(220,310,260,400);
floodfill(221,312,BROWN);

//creating window
setcolor(3);
rectangle(360,275,425,325);
floodfill(361,278,3);
setcolor(0);
line(360,300,425,300);
line(395,275,395,325);

//creating chimney
setcolor(BROWN);
rectangle(420,60,440,100);
floodfill(421,61,BROWN);

// creating chimney smoke using ellipse
setcolor(7);
ellipse(450,55,0,360,10,5);
ellipse(490,45,0,360,15,10);
ellipse(540,40,0,360,20,15);
floodfill(452,57,7);
floodfill(492,47,7);
floodfill(542,42,7);


delay(50000);
closegraph();
}