#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main()
{
int gd=DETECT, gm,color;
initgraph (&gd,&gm,"c: \\TURBOC3\\BGI");
color=getcolor();
//print the color value
printf("Current Color : %d \n",color);
getch();
closegraph();

	       }

