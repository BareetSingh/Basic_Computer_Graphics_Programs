//Midpoint Circle drawing Algoritm;
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
 p=1-r;

 while(x<=y)
 {
  x=x+1;
  if(p<0)
   p=p+2*x+1;
  else
  {
   y=y-1;
   p=p+2*x-2*y+1;
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

