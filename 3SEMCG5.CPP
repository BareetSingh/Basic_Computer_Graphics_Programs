//Bresenham Circle Drawing Algorithm
#include<graphics.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
 clrscr();
 int gd,gm,h,k,r,x,y,p;
 cout<<"Enter the coordinate of the Center and radious respectively\n";
 cin>>h>>k>>r;
 x=0;
 y=r;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 putpixel(x+h,y+k,10);
 p=3-2*r;
 while(x<=y)
 {
  x=x+1;
  if(p<0)
   p=p+4*x+6;
  else
  {
   y=y-1;
   p=p+4*x-4*y+10;
  }

   putpixel(x+h,y+k,11);
   putpixel(x+h,-y+k,11);
   putpixel(-x+h,y+k,11);
   putpixel(-x+h,-y+k,11);
   putpixel(y+h,x+k,11);
   putpixel(y+h,-x+k,11);
   putpixel(-y+h,x+k,11);
   putpixel(-y+h,-x+k,11);
  }
 getch();
 closegraph();
}

