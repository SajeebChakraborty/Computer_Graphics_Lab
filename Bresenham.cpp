#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void bresham_line_draw(int x0, int y0, int x1, int y1)
{
    int dx, dy, p_k, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p_k=2*dy-dx;
    while(x<x1)
    {
        if(p_k>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p_k=p_k+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p_k=p_k+2*dy;
        }
        x=x+1;
    }
}

int main()
{
    int gra_driver=DETECT, gra_mode, error, x0, y0, x1, y1;
    cout<<"Enter first co-ordinates of  point: ";
    cin>>x0>>y0;
    cout<<"Enter second co-ordinates of  point: ";
    cin>>x1>>y1;
	initgraph(&gra_driver, &gra_mode, "c:\\turboc3\\bgi");
    bresham_line_draw(x0, y0, x1, y1);
    getch();
}

