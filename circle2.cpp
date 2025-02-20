
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <iomanip>
using namespace std;

void displayC(int x, int y, int xc, int yc);
void displayL(int xc, int yc, int x,int y,int r);
int main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    // initwindow(getmaxwidth(),getmaxheight(),"w");
    float pk,xc,yc,x,y,r,k,pk1;
    cout<<"Enter radius"<<endl;
    cin>>r;
    xc = getmaxx()/2;
    yc = getmaxy()/2;
    k = 0;
    x = 0;
    y = r;
    pk = 1 - r;
    cout.setf(ios::left,ios::adjustfield);
    cout<<"| "<<setw(2)<<"K"<<" | "<<setw(4)<<"Pk"<<" | "<<setw(4)<<"Xk"<<" | "<<setw(4)<<"Yk"<<" | "<<setw(4)<<"Pk+1"<<" |"<<endl;

    while(x<=y){
        if(pk<0){
            x = x + 1;
            pk1 = pk + 2*x + 1;
            cout<<"| "<<setw(2)<<k<<" | "<<setw(4)<<pk<<" | "<<setw(4)<<x<<" | "<<setw(4)<<y<<" | "<<setw(4)<<pk1<<" |"<<endl;
            pk = pk1;
        }
        else{
            x = x + 1;
            y = y -1;
            pk1 = pk + 2*x - 2*y + 1;
            cout<<"| "<<setw(2)<<k<<" | "<<setw(4)<<pk<<" | "<<setw(4)<<x<<" | "<<setw(4)<<y<<" | "<<setw(4)<<pk1<<" |"<<endl;
            pk = pk1;
        }
        k++;
        displayC(x,y,xc,yc);
    }
    displayL(xc,yc,x,y,r);
    getch();
    closegraph();

}

void displayC(int x,int y,int xc,int yc){
    putpixel(x + xc, y + yc, WHITE);    //x , y
    putpixel(y + xc, x + yc, YELLOW);   // y , x
    putpixel(-x + xc, y + yc, MAGENTA); // -x, y
    putpixel(x + xc, -y + yc, LIGHTGRAY);// x, -y
    putpixel(-y + xc, -x + yc, GREEN);  // -y, -x
    putpixel(-x + xc, -y + yc, CYAN);  //-x, -y
    putpixel(y + xc, -x + yc, RED);   // y, -x
    putpixel(-y + xc, x + yc, BLUE); // -y, x
}
void displayL(int xc, int yc, int x,int y,int r){
    line(xc + r,yc,xc-r,yc); // horizontal
    line(xc,yc + r, xc, yc -r); //vertical
    line(xc+x,yc+y,xc-x,yc-y);  // TL - BR
    line(xc+x,yc-y,xc-x,yc+y);  // TR - BL

    outtextxy(xc+r+5,yc-5,(char *)"(r,0)"); //h
    outtextxy(xc-r-32,yc-5,(char *)"(-r,0)"); //h
    outtextxy(xc-10,yc+r+5,(char *)"(0,-r)");
    outtextxy(xc-10,yc-r-25,(char *)"(0,r)");
    outtextxy(x + xc + 10,y + yc + 5,(char *)"(x,-y)");
    outtextxy(-x + xc - 30, y + yc + 5, (char *)"(-x,-y)");
    outtextxy(-x + xc - 25, -y + yc - 22, (char *)"(-x,y)");
    outtextxy(x + xc + 5, -y + yc - 20, (char *)"(x,y)");

}

