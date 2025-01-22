#include<iostream>
#include<graphics.h>
using namespace std;
void displaymenu()
{
	cout << "Choose a shape to draw:\n";
    cout << "1. Arc\n";
    cout << "2. Pieslice\n";
    cout << "3. Bar\n";
    cout << "4. 3D Bar\n";
    cout << "5. rectangle\n";
    cout << "6. bag chal board\n";
}
int main(){
	int choice;
	char c;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	do{
		displaymenu();
		cout<<"enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{
			int x, y, start_angle, end_angle, radius;
            cout << "Enter center (x y), start angle, end angle, and radius: ";
            cin >> x >> y >> start_angle >> end_angle >> radius;
            setcolor(RED);
            arc(x, y, start_angle, end_angle, radius);
            break;
            }
            case 2:
            	{
            	int x, y, start_angle, end_angle, radius;
            	cout << "Enter center (x y), start angle, end angle, and radius: ";
           		cin >> x >> y >> start_angle >> end_angle >> radius;
           		setcolor(RED);
            	pieslice(x, y, start_angle, end_angle, radius);
            	break;
			}
			case 3:
				{
				int left, top, right, bottom;
                cout << "Enter top-left (left top) and bottom-right (right bottom) coordinates: ";
            	cin >> left >> top >> right >> bottom;
            	setfillstyle(SOLID_FILL,BLUE);
            	bar(left, top, right, bottom);
            	break;
				}
			case 4:
				{
				int left, top, right, bottom, depth;
            	cout << "Enter top-left (left top), bottom-right (right bottom), and depth: ";
            	cin >> left >> top >> right >> bottom >> depth;
            	bar3d(left, top, right, bottom, depth, 1); // 1 for top-on
            	break;
				}
			case 5:
				{ 
				int left, top, right, bottom;
	            cout << "Enter top-left (left top) and bottom-right (right bottom) coordinates: ";
	            cin >> left >> top >> right >> bottom;
	            setcolor(RED);
	            rectangle(left, top, right, bottom);
	            break;
				}
			case 6:
				{
					rectangle(100,200,300,400);
					line(200,200,200,400);
					line(100,300,300,300);
					line(100,200,300,400);
					line(100,400,300,200);
					line(100,300,200,200);
					line(200,200,300,300);
					line(100,300,200,400);
					line(200,400,300,300);
					line(100,250,300,250);
					line(100,350,300,350);
					line(150,200,150,400);
					line(250,200,250,400);
					setcolor(YELLOW);
					break;
				}
			default:
            cout << "Invalid choice!" << endl;
		}
		cout<<"do you want to continue\n";
		cin>>c;
	}while(c=='y');
	closegraph();
	return 0;
}

