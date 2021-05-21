//boundary fill
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
void boundaryfill(int x,int y,int fill,int boundary)
{
	int current;
	current=getpixel(x,y);
	if((current!=boundary)&&(current!=fill))
	{
		setcolor(fill);
		putpixel(x,y,fill);
		delay(5);
		boundaryfill(x+1,y,fill,boundary);
		boundaryfill(x-1,y,fill,boundary);
		boundaryfill(x,y+1,fill,boundary);
		boundaryfill(x,y-1,fill,boundary);
	}
}
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(10);
	rectangle(250,200,310,260);
	boundaryfill(280,250,12,10);
	getch();
	closegraph();
}
