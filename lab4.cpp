
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
int abs(int n){
	return ((n>0)?n:(n*(-1)));
}
int main()  
{
	int gd,gm;
	gd=DETECT,gm;
	float x1,y1,x2,y2;
	initgraph(&gd,&gm,(char*)"");
	cout<<"enter two starting points\n";
	cin>>x1>>y1;
	cout<<"enter two ending points\n";
	cin>>x2>>y2;
	float dx,dy;
	dx=x2-x1;
	dy=y2-y1;
	int steps;
	steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
	float X=x1;
	float Y=y1;
	float Xinc=dx/float(steps);
	float Yinc=dy/float(steps);
	cout<<"xk+1\t\t"<<"yk+1\t\t"<<"(xk+1,yK+1)\t\t"<<"(xk+1,yK+1)\n";
	float m;
	m=dy/dx;
	cout<<round(X)<<"\t\t"<<round(Y)<<"\t\t"<<X<<","<<Y<<endl;
	putpixel(round(X),round(Y),RED);
	for(int i=0;i<steps;i++){
	if(abs(dx)>abs(dy) && abs(x1)<abs(x2)){
		X=X+1;
		Y=Y+m;
		cout<<X<<"\t\t"<<Y<<"\t\t"<<X<<","<<Y<<"\t\t"<<"\t\t"<<round(X)<<","<<round(Y)<<endl;
	
	}
	else if(abs(dx)>abs(dy)&&abs(x1)>abs(x2)){
		X=X-1;
		Y=Y+m;
		cout<<X<<"\t\t"<<Y<<"\t\t"<<X<<","<<Y<<"\t\t"<<"\t\t"<<round(X)<<","<<round(Y)<<endl;
		
	}
	else if(abs(dx)<abs(dy)&&abs(y1)<abs(y2)){
		X=X+1/m;
		Y=Y+1;
		cout<<X<<"\t\t"<<Y<<"\t\t"<<X<<","<<Y<<"\t\t"<<"\t\t"<<round(X)<<","<<round(Y)<<endl;
		
	}
	else if(abs(dx)<abs(dy)&&abs(y1)>abs(y2)){
		X=X-1/m;
		Y=Y-1;
		cout<<X<<"\t\t"<<Y<<"\t\t"<<X<<","<<Y<<"\t\t"<<"\t\t"<<round(X)<<","<<round(Y)<<endl;
	
	}
	else{
		cout<<"error\n";
	}
		putpixel(round(X+200),round(200-Y),RED);
		delay(100);
}
	getch();
	return 0;	
	closegraph();
}
