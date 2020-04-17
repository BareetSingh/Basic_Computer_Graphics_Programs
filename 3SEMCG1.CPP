//DDA Line Drawing Algorithm;
#include<graphics.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int x,y,x1,y1,x2,y2,gd,gm,dx,dy,xinc,yinc,length;
 clrscr();
 cout<<"Enter the value of x1: ";
 cin>>x1;
 cout<<"Enter the value of y1: ";
 cin>>y1;
 cout<<"Enter the value of x2: ";
 cin>>x2;
 cout<<"Enter the value of y2: ";
 cin>>y2;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 dx=abs(x2-x1);
 dy=abs(y2-y1);

 if(abs(dx)>=abs(dy))
  length=abs(dx);
 else
  length=abs(dy);

 xinc=(x2-x1)/length;
 yinc=(y2-y1)/length;

 x=x1;
 y=y1;
 putpixel(x,y,10);

 int i=1;
 while(i<=length)
 {
  x=x+xinc;
  y=y+yinc;

  putpixel(x,y,10);
  i=i+1;
  delay(10);
 }
  getch();
  closegraph();
}