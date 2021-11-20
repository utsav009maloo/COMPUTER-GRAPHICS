#include<conio.h> 
#include<graphics.h>
#include<stdio.h> 
#include<math.h>
int main()
{
int gd = DETECT,gm, i; 
int r, xc,x,y,yc; 
initgraph (&gd, &gm, ""); 
printf("Enter the Centre and Radius:"); 
scanf("%d%d%d",&xc,&yc,&r);
for (x=-r;x<=r;x++)
{
y=sqrt(r*r-x*x); 
putpixel (x+xc,y+yc,BLUE); 
putpixel (x+xc, -y+yc, YELLOW);
outtextxy(150, 200, "UTSAV MALOO");
}
getch();
return 0;
}