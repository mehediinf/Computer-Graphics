#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    /* initialization of graphic mode */
    initgraph ( &gd, &gm, "C:\\TC\\BGI" );

    setfillstyle ( SOLID_FILL, BLACK );
    floodfill ( 100, 100, GREEN );
    for ( int i = 0; i < 99; i++ )
    {
        putpixel ( 100 + i, 100 + i, WHITE );
        delay ( 10 );
    }
    //line(100,100,200, 200);
    setcolor ( WHITE );
    getch();
    circle ( 150, 150, 50 );
    rectangle ( 100, 100, 200, 200 );
    getch();
    setfillstyle(SOLID_FILL, RED);
    floodfill(155,155,RED);
    getch();
    closegraph();
    return 0;
}
