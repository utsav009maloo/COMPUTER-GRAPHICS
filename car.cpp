#include"graphics.h"
int main()
{
   int i, j = 0, gd = DETECT, gm;

   initgraph(&gd,&gm,"NULL");

   outtextxy(25,240,"Press any key to view the moving car");

   // creating a pole to create a start point



   for( i = 0 ; i <= 420 ; i = i + 10, j++ )
   {

      cleardevice(); // clear screen
      line(180,270,180,400);
      rectangle(50+i,275,150+i,400);
      rectangle(150+i,350,200+i,400);
      circle(75+i,410,10);
      circle(175+i,410,10);
      ellipse(40+i,400,0,360,5,6);
      delay(100);
      ellipse(35+i,370,0,360,8,9);
      delay(100);
      ellipse(30+i,340,0,360,11,12);
      setcolor(j);
      delay(100);

      if( i == 420 )
         break;
      if ( j == 15 )
         j = 2;

   }
   
   delay(50000);

   closegraph();
   return 0;
}