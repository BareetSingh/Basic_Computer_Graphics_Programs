//Transformation(Rotation) Program;
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int gd,gm,x1,y1,x2,y2,nx2,ny2;
 double t,deg,rad;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 cout<<"Enter the coordinates of Line \n";
 cin>>x1>>y1>>x2>>y2;
 cout<<"\n Now Enter the angle of Rotation";
 cin>>deg;
 line(x1,y1,x2,y2);

 rad=deg*0.01745;
 nx2=abs((x2*cos(rad))-(y2*sin(rad)));
 ny2=abs((x2*sin(rad))+(y2*cos(rad)));
 setcolor(6);
 line(x1,y1,nx2,ny2);
 getch();
 closegraph();
}