
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT, gm;
initgraph (&gd, &gm , "c:\\TURBOC3\\BGI");
//set color to smiley to yellow
setcolor(YELLOW);
//creating circle and fill it with yellow using color floodfill
circle(300,100,40);
setfillstyle(SOLID_FILL, YELLOW);
floodfill(300,100,YELLOW);
// set color of background to be black
setcolor(BLACK);
setfillstyle(SOLID_FILL, BLACK);

//use fillellipse for eyes
fillellipse (310,85,2,6);
fillellipse (290,85,2,6);
// use ellipse for creating mouth
ellipse(300,100,205,335,20,9);
ellipse(300,100,205,335,20,10);
ellipse(300,100,205,335,20,11);
getch();
closegraph();

}