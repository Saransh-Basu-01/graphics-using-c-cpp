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
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	int x1,y1,x2,y2,sx,sy,tx,ty;
	
				cleardevice();
				cout<<"enter the points for translation: "<<endl;
				cin>>x1>>y1>>x2>>y2;
				cout<<"translation"<<endl;
				cout<<"enter tx and ty: ";
				cin>>tx>>ty;
				int a,b,c,d,e,f;
				cout<<"enter values for triangle scaling\n";
				cin>>a>>b>>c>>d>>e>>f;
				cout<<"enter sx and sy\n";
				cin>>sx>>sy;
				cplus();
				setcolor(WHITE);
				line(a,b,c,d);
				line(c,d,e,f);
				line(a,b,e,f);
				line(x1+319,239-y1,x2+319,239-y2);
				setcolor(CYAN);
				line(x1+319+tx,239-y1+ty,x2+319+tx,239-y2+ty);
				setcolor(CYAN);
				line(a*sx-125,b*sy-150,c*sy-125,d*sx-150);
				line(c*sx-125,d*sy-150,e*sy-125,f*sx-150);
				line(a*sx-125,b*sy-150,e*sy-125,f*sx-150);
	getch();
	closegraph();

}
