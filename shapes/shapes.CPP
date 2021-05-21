#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdriver=DETECT,gmode;
	clrscr();
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	circle(160,190,30);
	rectangle(80,240,400,420);
	line(80,240,160,120);
	line(240,240,240,420);

	line(160,120,240,240);
	line(160,120,320,120);
	line(320,120,400,240);

	rectangle(300,270,350,350);
	line(300,313,350,313);
	line(325,270,325,350);
	rectangle(120,300,170,420);
getch();
closegraph();
}