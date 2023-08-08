#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()

{
int gd=DETECT , gm;
int arr[]={320,150,400,250,250,350,320,150};
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
drawpoly(4,arr);
setfillstyle(SOLID_FILL, GREEN);
fillpoly(4,arr);
getch();
closegraph();

}