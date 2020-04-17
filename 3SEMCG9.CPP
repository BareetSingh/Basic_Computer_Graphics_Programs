//Transformation (Reflection);
#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int gd,gm,x1,x2,x3,y1,y2,y3,choice;

 cout<<"Enter the coordinate of triangle respectively\n";
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 cout<<"\nNow Enter 1 for reflecting triangle about the x-axis\n";
 cout<<"\nEnter 2 for reflecting triangle about the y-axis\n";
 cin>>choice;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 cout<<"Original Triangle shown by white color\n";
 cout<<"And Transformed Traiangle shown by Green color";

 //For Coordinate lines;
 line(319,0,319,479); //for x-axis
 line(0,239,639,239); //for y-axis

 line(x1+319,-y1+239,x2+319,-y2+239);
 line(x2+319,-y2+239,x3+319,-y3+239);
 line(x3+319,-y3+239,x1+319,-y1+239);

 setcolor(2);
 if(choice==1)
  {
   y1=-y1;
   y2=-y2;
   y3=-y3;

 line(x1+319,-y1+239,x2+319,-y2+239);
 line(x2+319,-y2+239,x3+319,-y3+239);
 line(x3+319,-y3+239,x1+319,-y1+239);
 }

 if(choice==2)
  {
   x1=-x1;
   x2=-x2;
   x3=-x3;

   line(x1+319,-y1+239,x2+319,-y2+239);
   line(x2+319,-y2+239,x3+319,-y3+239);
   line(x3+319,-y3+239,x1+319,-y1+239);
  }
  getch();
  closegraph();
}
