#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi") ;
 outtext("press any key to change background color to green");
  getch();
 setbkcolor(GREEN);
 getch();
 closegraph();



}
