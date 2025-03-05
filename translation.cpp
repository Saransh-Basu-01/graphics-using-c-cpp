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
	int x1,y1,x2,y2,sx,sy,tx,ty,a,choice = 0;
	while(choice!=4)
	{

		// cleardevice();
		cout<<"enter your choice: "<<endl;
		cout<<"1.translation: "<<endl;
		cout<<"2.scaling: "<<endl;
		cout<<"3.rotation: "<<endl;
		cout<<"4.exit"<<endl;
		cout<<"enter your choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			

				cleardevice();
				cout<<"enter the points: "<<endl;
				cin>>x1>>y1>>x2>>y2;
				cout<<"translation"<<endl;
				cout<<"enter tx and ty: ";
				cin>>tx>>ty;
				line(x1+319,239-y1,x2+319,239-y2);
				cplus();
				setcolor(CYAN);
				line(x1+319+tx,239-y1+ty,x2+319+tx,239-y2+ty);
				getch();
			
			break;
			case 2:
					// cleardevice();
					cout<<"scaling"<<endl;
					 cout<<"enter the points: "<<endl;
					 cin>>x1>>y1>>x2>>y2;
					cout<<"enter sx and sy: "<<endl;
					cin>>sx>>sy;
					line(x1+319,239-y1,x2+319,239-y2);
					cplus();
					setcolor(CYAN);
					line(x1*sx+319,239-y1*sy,x2*sx+319,239-y2*sy);
					getch();
				
			break;
			case 3:				
					// cleardevice();
					cout<<"rotation"<<endl;
					// cout<<"enter the points: "<<endl;
					// cin>>x1>>y1>>x2>>y2;
					cout<<"enter the angle to be rotated: "<<endl;
					cin>>a;
					a=(a*3.14)/180;
					line(x1+319,239-y1,x2+319,239-y2);
					cplus();
					setcolor(CYAN);
					line((x1*cos(a)-x1*sin(a))+319,239-(y1*sin(a)+y1*cos(a)),(x2*cos(a)-x2*sin(a))+319,239-(y2*sin(a)+y2*cos(a)));
					getch();
				break;
			case 4:
			
				exit(0);
			
			break;
		}
	}
	getch();

}
