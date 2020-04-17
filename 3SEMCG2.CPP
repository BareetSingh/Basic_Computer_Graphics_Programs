//Bresenham Line drawing Algorithm;
#include<graphics.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int x,y,x1,y1,x2,y2,gd,gm,dx,dy,p;
 clrscr();

 cout<<"Enter the value of x1: ";
 cin>>x1;
 cout<<"Enter the value of y1: ";
 cin>>y1;
 cout<<"Enter the value of x2: ";
 cin>>x2;
 cout<<"Enter the value of y2: ";
 cin>>y2;

 dx=x2-x1;
 dy=y2-y1;
 p=2*dy-dx;

 x=x1;
 y=y1;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 putpixel(x,y,10);

 int i=1;
 while(i<dx)
 {
  x=x+1;
  if(p<0)
   p=p+2*dy;
  else
  {
   y=y+1;
   p=p+2*dy-2*dx;
  }
  putpixel(x,y,10);
  i++;
 }
 getch();
 closegraph();
}


