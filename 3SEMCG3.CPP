//DDA Circle drawing algorithm;

#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 float x1,y1,x2,y2,stx,sty,eps;
 int x,y,gd,gm,i,val,r;
 cout<<"Enter the radius of circle\n";
 cin>>r;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 x1=r*cos(0);
 y1=r*sin(0);
 stx=x1;
 sty=y1;
 i=0;

 do
 {
  val=pow(2,i);
  i++;
 }while(val<r);

 eps=1/pow(2,i-1);
 do
 {
  x2=x1+y1*eps;
  y2=y1-eps*x2;
  putpixel(200+x2,200+y2,15);
  x1=x2;
  y1=y2;
  delay(10);
 }while(((y1-sty)<eps) || ((stx-x1)>eps));

 getch();
 closegraph();
}



