#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int x1,y1,x2,y2,midx,midy;
void axis();
void translation()
{
	int tx,ty,xn1,yn1,xn2,yn2;
	printf("\nenter the translation: ");
	scanf("%d%d",&tx,&ty);
	cleardevice();
	outtextxy(400,100,"TRANSLATION");
	xn1=x1+tx;
	yn1=y1+ty;
	xn2=x2+tx;
	yn2=y2+ty;
	axis();
	rectangle(xn1,yn1,xn2,yn2);
	getch();
}
void scaling()
{
	float xn1,yn1,xn2,yn2;
	float sx,sy;
	printf("enter the scaling factor: ");
	scanf("%f%f",&sx,&sy);
	cleardevice();
	outtextxy(300,200,"SCALING");
	xn1=x1*sx;
	yn1=y1*sy;
	xn2=x2*sx;
	yn2=y2*sy;
	axis();
	rectangle(xn1,yn1,xn2,yn2);
	getch();
}
void rotation()
{
	int ang;
	float rx,xn1,yn1,xn2,yn2,x1n1,y1n1,x2n2,y2n2;
	printf("\nenter the angle of rotation: ");
	scanf("%d",&ang);
	cleardevice();
	outtextxy(500,200,"ROTATION");
	rx=(ang*3.14)/180;
	xn1=x1*cos(rx)-y1*sin(rx);
	yn1=y1*cos(rx)+x1*sin(rx);
	xn2=x2*cos(rx)-y2*sin(rx);
	yn2=y2*cos(rx)+x2*sin(rx);
	x1n1=x2*cos(rx)-y1*sin(rx);
	y1n1=y1*cos(rx)+x2*sin(rx);
	x2n2=x1*cos(rx)-y2*sin(rx);
	y2n2=y2*cos(rx)+x1*sin(rx);
	axis();
	line(xn1,yn1,x1n1,y1n1);
	line(x1n1,y1n1,xn2,yn2);
	line(xn2,yn2,x2n2,y2n2);
	line(x2n2,y2n2,xn1,yn1);
	getch();
}
void get()
{
	printf("\nenter the cordinates x1,y1,x2,y2: ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	outtextxy(200,100,"ORIGINAL OBJECT");
	x1=getmaxx()/2-x1;
	y1=getmaxy()/2-y1;
	x2=getmaxx()/2+x2;
	y2=getmaxy()/2+y2;
	axis();
	getch();
}
void axis()
{
	midx=getmaxx()/2;
       	midy=getmaxy()/2;
       	rectangle(x1,y1,x2,y2);
}
void main()
{
	int ch;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	get();
	do
	{
		cleardevice();
		outtextxy(10,10,"1.translation");
		outtextxy(10,20,"2.scaling");
		outtextxy(10,30,"3.rotation");
		outtextxy(10,40,"4.exit");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:translation();
				break;
			case 2:scaling();
				break;
			case 3:rotation();
				break;
			case 4:exit(0);
		}
	}while(ch<4);
}