#include<stdio.h>
#include<Conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT , gm;
  long x1=100, y1=100, x2=200, y2=200;
  double d1, xt, yt;
  initgraph(&gd, &gm, "C://TURBOC3//BGI");
  printf("\n \n\n Enter Angle Of Rotation");
  scanf("%lf",&d1);
  d1=(d1*3.14)/180.0;
  xt= x1+((x2-x1)*cos(d1)-(y2-y1)*sin(d1));
  yt= y1+((x2-x1)*sin(d1)+(y2-y1)*cos(d1));
  line(x1,y1,x2,y2);
  getch();
  cleardevice();
  printf("Line After Rotation");
  line(x1,y1,(int)xt,(int)yt);
  getch();

}