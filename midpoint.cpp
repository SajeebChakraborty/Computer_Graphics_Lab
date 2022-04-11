#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void midpoint_draw_circle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int p_k = 0;
    while (x >= y)
    {
        putpixel(x0 + x, y0 + y, 7);
        putpixel(x0 + y, y0 + x, 7);
        putpixel(x0 - y, y0 + x, 7);
        putpixel(x0 - x, y0 + y, 7);
        putpixel(x0 - x, y0 - y, 7);
        putpixel(x0 - y, y0 - x, 7);
        putpixel(x0 + y, y0 - x, 7);
        putpixel(x0 + x, y0 - y, 7);
        if (p_k <= 0)
        {
            y += 1;
            p_k += 2*y + 1;
        }
        if (p_k > 0)
        {
            x -= 1;
            p_k -= 2*x + 1;
        }
    }
}
int main()
{
    int gra_driver=DETECT, gra_mode, error, x, y, r;
    initgraph(&gra_driver, &gra_mode, "c:\\turboc3\\bgi");
    cout<<"Input circle radius: ";
    cin>>r;
    cout<<"Input center co-ordinates (x and y): ";
    cin>>x>>y;
    midpoint_draw_circle(x, y, r);

    getch();

    return 0;
}
