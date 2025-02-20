#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int r,a,b,x,y,pk;
	cout<<"enter radius\n";
	cin>>r;
	cout<<"enter center\n";
	cin>>a>>b;
	x=0;
	y=r;
	pk=1-r;
	while(x<=y){
		if(pk<0){
			x=x+1;
			y=y;
			pk=pk+2*x+1;
		}
		else{
			x=x+1;
			y=y-1;
			pk=pk+2*x-2*y+1;
		}
		putpixel(b+y,a+x,1);
		putpixel(b+y,a-x,2);
		putpixel(b-y,a+x,3);
		putpixel(b-y,a-x,4);
		putpixel (50+a+x, b+y-50, 5);
		putpixel (50+a-x, b+y-50, 6);
		putpixel (50+a+x, b-y-50, 7);
		putpixel(50+a-x,b-y-50,8);
		}
		line(100,200,400,200);
		line(250,50,250,350);
		line(100,50,400,350);
		line(400,50,100,350);
		outtextxy(370,190,"x-axis");
		outtextxy(260,70,"y-axis");
		outtextxy(300,180,"(x,y)");
		outtextxy(260,120,"(y,x)");
		outtextxy(150,180,"(-x,y)");
		outtextxy(190,120,"(-y,x)");
		outtextxy(290,220,"(x,-y)");
		outtextxy(260,270,"(-y,x)");
		outtextxy(150,210,"(-x,-y)");
		outtextxy(200,270,"(-y,-x)");
		outtextxy(100,420,"Midpoint circle generating algorithm");
		getch();
		closegraph();	
}
