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
for(x=-r; x<=r; x++)
{
	y= sqrt(r*r-x*x);
putpixel(x+xc, y+yc, RED);
putpixel(y+xc, x+yc, YELLOW);
putpixel(y+xc, -x+yc, GREEN);
putpixel(x+xc, -y+yc, BLUE);
putpixel(-x+xc, -y+yc, CYAN);
putpixel(-y+xc, -x+yc, MAGENTA);
putpixel(-y+xc, x+yc, BROWN);
putpixel(-x+xc, y+yc, WHITE);
}
getch();
}