// Program For Translation Of Line

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
     {
     int gd=DETECT , gm;
     int x1, x2, y1, y2, x,y;
     printf("Enter line co ordinate \n");
     scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
     initgraph(&gd, &gm,"c://turboc3//bgi");
     line(x1,y1,x2,y2);
     printf("Enter Trancelation Factor\n");
     scanf("%d%d",&x,&y);
     x1=(x1+x);
     y1=(y1+y);
     x2=(x2+x);
     y2=(y2+y);
      printf("print line after trancelation");
	line(x1,y1,x2,y2);


 getch();
 closegraph();

 }

