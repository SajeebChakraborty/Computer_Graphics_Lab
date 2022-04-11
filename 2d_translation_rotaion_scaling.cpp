#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gra_driver=DETECT,gra_mode,selection;
    initgraph(&gra_driver,&gra_mode,(char*)"");
    cout<<"1.To get Translation\n2.To get Rotation\n3.To get Scaling  "<<endl;
    cout<<"Selection For Transformation:";
    cin>>selection;
    switch(selection)
        {
        case 1:
            {   int x1=200,y1=150,x2=300,y2=250;
                int tx=50,ty=50;
                cout<<"Rectangle before translation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();
                break;
            }
        case 2:
            {  long x1=200,y1=200,x2=300,y2=300;
                double a;
                cout<<"Rectangle with rotation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;
                long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
                long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
                setcolor(2);
                rectangle(x1,y1,xr,yr);
                getch();
                break;
            }
        case 3:
            {
                int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"After scaling"<<endl;
                setcolor(10);
                rectangle(x1*x,y1*y,x2*x,y2*y);
                getch();
                break;
            }

default:
          {
            cout<<"Invalid Selection"<<endl;
            break;
          }
        }
    closegraph();
    return 0;
}
