
#include <iostream>
#include <conio.h>
#include <graphics.h>

using namespace std;
int main()
{
    float rx, ry, x, y, po, po2, xc, yc;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    xc = getmaxx() / 2;
    yc = getmaxy() / 2;
    cout << "Enter length of major axis\n";
    cin >> rx;
    cout << "Enter length of minor axis\n";
    cin >> ry;
    po = ry * ry - rx * rx * ry + rx * rx / 4;
    x = 0;
    y = ry;
    // Region 1
    while (2 * x * ry * ry <= y * 2 * rx * rx)
    {
        if (po < 0)
        {
            x = x + 1;
            po = po + 2 * x * ry * ry + ry * ry;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            po = po + 2 * x * ry * ry - 2 * y * rx * rx + ry * ry;
        }
        putpixel(xc + x, yc + y, 2);
        putpixel(xc - x, yc + y, 3);
        putpixel(xc + x, yc - y, 4);
        putpixel(xc - x, yc - y, 5);
    }
    // Region 2
    po2 = ry * ry * (x + 1 / 2) * (x + 1 / 2) + rx * rx * ((y - 1) * (y - 1)) - rx * rx * ry * ry;
    while (y >= 0)
    {
        if (po2 > 0)
        {
            y = y - 1;

            po2 = po2 - 2 * rx * rx * y + rx * rx;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            po2 = po2 + 2 * x * ry * ry - 2 * y * rx * rx + rx * rx;
        }
        putpixel(xc + x, yc + y, 6);
        putpixel(xc - x, yc + y, 7);
        putpixel(xc + x, yc - y, 8);
        putpixel(xc - x, yc - y, 9);
    }
    setcolor(WHITE);
    line(xc + rx + 10, yc, xc - rx - 10, yc);
    line(xc, yc + ry + 10, xc, yc - ry - 10);
    outtextxy(xc + rx + 60, yc, (char *)"X-aXis");
    outtextxy(xc + rx + 10, yc - 5, (char *)"(rx,0)");
    outtextxy(xc, yc - ry - 40, (char *)"y-aXis");
    outtextxy(xc - 20, yc - ry - 20, (char *)"(0,ry)");
    outtextxy(xc + (0.75 * rx), yc - (0.85 * ry), (char *)"(x,y)");
    outtextxy(xc - (0.75 * rx), yc + (0.85 * ry), (char *)"(-x,-y)");
    outtextxy(xc + (0.75 * rx), yc + (0.75 * ry), (char *)"(x,-y)");
    outtextxy(xc - (0.75 * rx), yc - (0.95 * ry), (char *)"(-x,y)");
    outtextxy(xc - rx, yc + ry + 40, (char *)"Mid-Point Ellipse Drawing Algorithm");
    getch();
    closegraph();
}
