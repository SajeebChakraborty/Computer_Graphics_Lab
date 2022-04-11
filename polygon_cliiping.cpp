#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main()
{
 	int gra_driver,gra_mode,n,*x,i,k=0;
	int w[]={220,140,420,140,420,340,220,340,220,140};
	detectgraph(&gra_driver,&gra_mode);
	initgraph(&gra_driver,&gra_mode,"c:\\turboc3\\bgi");
	printf("For Window:-");
	setcolor(RED);
	drawpoly(5,w);
	printf("Input the no. of vertices of polygon: ");
	scanf("%d",&n);
	x = (int*)malloc(n*2+1);
	printf("Input the coordinates of points:\n");
	k=0;
	for(i=0;i<n*2;i+=2)
	{
		printf("(x%d,y%d): ",k,k);
		scanf("%d,%d",&x[i],&x[i+1]);
		k++;
	}
	x[n*2]=x[0];
	x[n*2+1]=x[1];
	setcolor(WHITE);
	drawpoly(n+1,x);
	printf("\nPress a button to clip a polygon..");
	getch();
 	setcolor(RED);
 	drawpoly(5,w);
 	setfillstyle(SOLID_FILL,BLACK);
 	floodfill(2,2,RED);
 	gotoxy(1,1);
 	printf("\nThis is the clipped polygon..");
 	getch();

 	cleardevice();
 	closegraph();
 	return 0;
}
