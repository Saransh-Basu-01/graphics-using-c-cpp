#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
void displaymenu(){
	cout << "Choose an option to perform operations on:\n";
    cout << "1. Point\n";
    cout << "2. Line\n";
    cout << "3. Rectangle\n";
    cout << "4. Square\n";
    cout << "5. Triangle\n";
    cout << "6. Circle\n";
    cout << "7. Ellipse\n";
    cout << "Enter your choice (1-7): ";
}
int main()
{
	int choice;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	char c;
	do {
		displaymenu();
		cout<<"enter your choice"<<endl;
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1:{
	    		int x,y;
	    		cout<<"enter co ordinates of the point\n";
	    		cin>>x>>y;
	    		putpixel(x,y,WHITE);
	    		break;
	    	}
	    	case 2:
	    		{
	    		int x1,y1,x2,y2;
	    		cout<<"enter cordinates of start and end points\n";
	    		cin >> x1 >> y1 >> x2 >> y2;
                line(x1, y1, x2, y2); 
	    		break;
	    	}
	    	case 3: {
            // Rectangle
            int x1, y1, x2, y2;
            cout << "Enter coordinates of the top-left and bottom-right corners (x1, y1, x2, y2): ";
            cin >> x1 >> y1 >> x2 >> y2;
            rectangle(x1, y1, x2, y2); // Draw rectangle
            break;
        	}
	    	case 4: {
            // Square
            int x, y, side;
            cout << "Enter the top-left corner (x, y) and side length: ";
            cin >> x >> y >> side;
            rectangle(x, y, x + side, y + side); // Draw square
            break;
           }
	    	 case 5: {
            // Triangle
            int x1, y1, x2, y2, x3, y3;
            cout << "Enter the coordinates of the three vertices (x1, y1, x2, y2, x3, y3): ";
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            line(x1, y1, x2, y2); // Draw first side
            line(x2, y2, x3, y3); // Draw second side
            line(x3, y3, x1, y1); // Draw third side
            break;
            }
             case 6: {
            // Circle
            int x, y, radius;
            cout << "Enter the center (x, y) and radius: ";
            cin >> x >> y >> radius;
            circle(x, y, radius); // Draw circle
            break;
            }
	    	case 7: {
            // Ellipse
            int x, y, a, b;
            cout << "Enter the center (x, y) and the lengths of semi-major (a) and semi-minor (b) axes: ";
            cin >> x >> y >> a >> b;
            ellipse(x, y, 0, 360, a, b); // Draw ellipse
            cout << "Ellipse drawn.\n";
            break;
            }
        default:
            cout << "Invalid choice! Please choose a number between 1 and 7.\n";
		}
	cout<<"do you want to continue\n";
	cin>>c;   
	}while(c=='y');
	closegraph();
	return 0;
}
