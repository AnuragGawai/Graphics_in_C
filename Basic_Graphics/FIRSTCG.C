// program to draw for simple line, rectangle,circle,ellipse 
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd= DETECT , gm;
initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
setbkcolor(GREEN);
printf("\t\t\t\n LINE");
line(50,40,190,40);
printf("\t\n\n\n RECTANGLE");
rectangle(125,115,215,165);
printf("\t\t\t\t\n\n\n\n\n\n\n CIRCLE");
circle(120,270,30);
printf("\t\n\n\n\n\n\n\n\n ELLIPSe");
ellipse(120,350,0,360,30,20);
getch();


}
