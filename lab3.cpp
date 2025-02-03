#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int gd,gm;
	gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int choice;
	char c;
	do {
		cout<<"1.bar diagram 2d\n";
		cout<<"2.3d bar diagram\n";
		cout<<"3.piechart\n";
		cout<<"4.moving cycyle\n";
		cout<<"enter your choice\n";
		cin>>choice;
		switch(choice){
			case 1:
			setcolor(BLUE);
			line(100, 100, 100, 400);
			line(100, 400, 800, 400);
			settextstyle(0, 0, 1); // Corrected text style
			outtextxy(100, 400, "no of students"); // Corrected function name
			settextstyle(0, 1, 1); // (Font, Direction = 1 (VERTICAL), Size)
            outtextxy(50, 300, "Year"); // Adjusted position
			setfillstyle(SOLID_FILL, RED);
			bar(120, 150, 140, 400);
			setfillstyle(SOLID_FILL, BLUE);
			bar(160, 200, 180, 400);
			setfillstyle(SOLID_FILL, GREEN);
			bar(200, 250, 220, 400);
			setfillstyle(SOLID_FILL, RED);
			bar(240, 100, 260, 400);	
			break;
			
			case 2:
			setcolor(BLUE);
			line(100, 100, 100, 400);
			line(100, 400, 800, 400);
			setfillstyle(SOLID_FILL,RED);
			bar3d(120, 150, 140, 400,15,1);
			setfillstyle(SOLID_FILL,BLUE);
			bar3d(160, 200, 180, 400,15,1);
			setfillstyle(SOLID_FILL,GREEN);
			bar3d(200, 250, 220, 400,15,1);
			setfillstyle(SOLID_FILL,RED);
			bar3d(240, 100, 260, 400,15,1);
			break;
			
			case 3:
				setfillstyle(SOLID_FILL,RED);
				pieslice(250,250,0,60,200);
				setfillstyle(SOLID_FILL,BLUE);
				pieslice(250,250,60,120,200);
				setfillstyle(SOLID_FILL,YELLOW);
				pieslice(250,250,120,270,200);
				setfillstyle(SOLID_FILL,GREEN);
				pieslice(250,250,270,360,200);
				break;
			case 4:
				int x = 100, y = 300;  // Initial position

    			while (x < getmaxx() - 150) {  
        		cleardevice();  // Clear previous frame

		        // Draw wheels
		        circle(x, y, 30);  // Front wheel
		        circle(x + 100, y, 30);  // Back wheel
		        // Draw frame
		        line(x, y, x + 50, y - 50);  // Front diagonal
		        line(x + 100, y, x + 50, y - 50);  // Back diagonal
		        line(x + 50, y - 50, x + 30, y - 30);  // Seat bar
		        line(x + 30, y - 30, x + 70, y - 30);  // Top bar
		        line(x + 70, y - 30, x + 100, y);  // Rear frame
		
		        // Draw handlebar
		        line(x + 50, y - 50, x + 60, y - 65);
		        line(x + 60, y - 65, x + 70, y - 65);
		
		        // Draw seat
		        line(x + 30, y - 30, x + 25, y - 35);
		        line(x + 25, y - 35, x + 35, y - 35);
		        line(x + 35, y - 35, x + 30, y - 30);
				 circle(x + 50, y, 7);
		        line(x + 50, y, x + 55, y - 10);
		        line(x + 50, y, x + 45, y + 10);
		
		        delay(50);  // Speed control
		        x += 5;  // Move cycle forward
		    }
                break;
		}
	cout<<"continue\n";
	cin>>c;
	}while(c=='y');
	return 0;
	closegraph();
}
