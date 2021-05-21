#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdriver=DETECT,gmode;
	clrscr();
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	setcolor(RED);
	setlinestyle(DOTTED_LINE,1,2);
	line(160,120,320,120);
	setcolor(YELLOW);
	setlinestyle(SOLID_LINE,0,2);
	line(160,150,320,150);
	setcolor(GREEN);
	setlinestyle(DASHED_LINE,3,3);
	line(160,180,320,180);
	getch();
	closegraph();
}