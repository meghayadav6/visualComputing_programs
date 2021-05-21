//floodfill
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void floodfill(int x,int y,int fillcolor,int oldcolor)
{
	if(getpixel(x,y)==oldcolor)
	{
		setcolor(fillcolor);
		putpixel(x,y,fillcolor);
		putpixel(x,y,fillcolor);
		floodfill(x+1,y,fillcolor,oldcolor);
		floodfill(x-1,y,fillcolor,oldcolor);
		floodfill(x,y+1,fillcolor,oldcolor);
		floodfill(x,y-1,fillcolor,oldcolor);
	}
}
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(50,50,100,100);
	floodfill(55,55,40,0);
	getch();
	closegraph();
}
