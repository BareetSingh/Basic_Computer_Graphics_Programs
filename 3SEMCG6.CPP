//Transformation(Translation) Program;
#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int gd,gm,x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,xt,yt;
 cout<<"\n\t Enter the coordinates of the vertices of the Triangle\n";
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 cout<<"\n Now Enter the Trasaction factor\n";
 cin>>xt>>yt;

 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 cout<<"Original Triangle shown by white color\n";
 cout<<"Transformed Traiangle shown by Green color";
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x1,y1);

 nx1=x1+xt;
 ny1=y1+yt;
 nx2=x2+xt;
 ny2=y2+yt;
 nx3=x3+xt;
 ny3=y3+yt;
 setcolor(10);
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
 closegraph();
}