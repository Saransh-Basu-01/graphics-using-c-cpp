
#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <iomanip>
using namespace std;
void displayC(int, int, int, int);
void displayL(int, int, int, int, int);
int main()
{
    int gd = DETECT, gm, r, k, xc, yc, x, y, xk, yk, xt, yt, pk, pk1;
    initgraph(&gd, &gm, (char *)" ");
    xc = getmaxx() / 2;
    yc = getmaxy() / 2;
    r = 100;
    x = 0;
    y = r;
    k = 0;
    pk = 1 - r;
    cout.setf(ios::left,ios::adjustfield);
    cout<<"| "<<setw(2)<<"K"<<" | "<<setw(3)<<"Pk"<<" | "<<setw(3)<<"Xk"<<" | "<<setw(3)<<"Yk"<<" | "<<" | "<<setw(4)<<"Pk+1"<<" |"<<endl;
    while (x <= y)
    {
        if (pk < 0)
        {
            x = x + 1;
            pk1 = pk + 2 * x + 1;
                        pk = pk1;
            k++;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            pk1 = pk + 2 * x - 2 * y + 1;
            cout<<"| "<<setw(2)<<k<<" | "<<setw(3)<<pk<<" | "<<setw(3)<<x<<" | "<<setw(3)<<y<<" | "<<" | "<<setw(4)<<pk1<<" |"<<endl;
            pk = pk1;
            k++;
        }
        displayC(x, y, xc, yc);
    }
    //displayL(xc, yc, x, y, r);
    getch();
    closegraph();
}
void displayC(int x, int y, int xc, int yc)
{
    putpixel(x + xc, y + yc, WHITE);
    putpixel(y + xc, x + yc, YELLOW);
    putpixel(-x + xc, y + yc, LIGHTMAGENTA);
    putpixel(x + xc, -y + yc, LIGHTGRAY);
    putpixel(-y + xc, -x + yc, LIGHTGREEN);
    putpixel(-x + xc, -y + yc, LIGHTCYAN);
    putpixel(y + xc, -x + yc, LIGHTRED);
    putpixel(-y + xc, x + yc, LIGHTBLUE);
}
void displayL(int xc, int yc, int x, int y, int r)
{
    line(xc, yc, xc, r + yc);
    line(xc, yc, xc + r, yc);
    line(xc, yc, xc, -r + yc);
    line(xc, yc, -r + xc, yc);
    line(xc, yc, x + xc, y + yc);
    line(xc, yc, -x + xc, y + yc);
    line(xc, yc, -x + xc, -y + yc);
    line(xc, yc, x + xc, -y + yc);
    outtextxy(xc - 10, -r + yc - 20, (char *)"(0,r)");
    outtextxy(xc - 10, r + yc + 5, (char *)"(0,r)");
    outtextxy(xc + r + 5, yc - 8, (char *)"(r,0)");
    outtextxy(xc - r - 35, yc - 8, (char *)"(r,0)");
    outtextxy(x + xc + 5, y + yc + 5, (char *)"(x,-y)");
    outtextxy(-x + xc - 30, y + yc + 5, (char *)"(-x,-y)");
    outtextxy(-x + xc - 25, -y + yc - 22, (char *)"(-x,y)");
    outtextxy(x + xc + 5, -y + yc - 20, (char *)"(x,y)");
}

