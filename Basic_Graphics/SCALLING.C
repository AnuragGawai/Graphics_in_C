#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int gd=DETECT, gm;
int x1=30,y1=3,x2=70,y2=70,x=2,y=2;
initgraph(&gd,&gm,"c://turboc3//bgi");
printf("\n\n\nRectangle Before Scalling") ;
rectangle(x1,y1,x2,y2);
getch();
cleardevice();
getch();
cleardevice();
 printf("\n\n\nRectangle After Scalling");
 rectangle(x1*x,y1*y,x2*x,y2*y);
 getch();



}