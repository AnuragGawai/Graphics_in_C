#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int gd=DETECT, gm;
int x1=50,y1=150,x2=75,y2=125,x3=100,y3=150;
initgraph(&gd,&gm,"c://turboc3//bgi");
printf("\n\nTriangle Before reflection") ;
line(x1,y1,x2,y2);
line(x1,y1,x3,y3);
line(x2,y2,x3,y3);

getch();
cleardevice();
getch();
cleardevice();
   printf("\n\nTriangle Before reflection") ;
   line(x1,-y1+200,x2,-y2+200);
line(x1,-y1+200,x3,-y3+200);
line(x2,-y2+200,x3,-y3+200);
 getch();



}


























































































