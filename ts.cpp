#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

void cplus()
{
	int cx, cy;
	cx=getmaxx();
	cy=getmaxy();
	line(0,cy/2,cx,cy/2);
	line(cx/2,0,cx/2,cy);
}
void translationscaling(){
	//translation of line
	int x1,y1,x2,y2,tx,ty;
	x1=25;
	y1=50;
	x2=75;
	y2=100;
	tx=20;
	ty=50;
	cleardevice();
	line(x1+319,239-y1,x2+319,239-y2);
	cplus();
	setcolor(CYAN);
	line(x1+319+tx,239-y1+ty,x2+319+tx,239-y2+ty);
//scaling for triangle
	int a,b,c,d,e,f;
	a=100;
	b=150;
	c=150;
	d=150;
	e=125;
	f=110;
	int sx=2;
	int sy=2;
	setcolor(WHITE);
	line(a,b,c,d);
	line(c,d,e,f);
	line(a,b,e,f);
	setcolor(CYAN);
	line(a*sx-125,b*sy-150,c*sy-125,d*sx-150);
	line(c*sx-125,d*sy-150,e*sy-125,f*sx-150);
	line(a*sx-125,b*sy-150,e*sy-125,f*sx-150);
	getch();
}
//void scalingoftriangle(){
//	int x1,y1,x2,y2;
//	x1=25;
//	y1=50;
//	x2=75;
//	y2=100;
//	line(x1+200,150-y1,x2+300,300-y2);
////	line(x+319,239-y,x+319,239-y);
////	line(x1+319,239-y1,x2+319,239-y2);
//	setcolor(CYAN);
//	cplus();
////	line(x1*sx+319,239-y1*sy,x2*sx+319,239-y2*sy);
////	line(x1*sx+319,239-y1*sy,x2*sx+319,239-y2*sy);
////	line(x1*sx+319,239-y1*sy,x2*sx+319,239-y2*sy);
//	getch();
//}
int main(){
	int gd = DETECT, gm;
	int choice;
	char c;
	initgraph(&gd, &gm, (char *)"");
	translationscaling();
	closegraph();
	
}
