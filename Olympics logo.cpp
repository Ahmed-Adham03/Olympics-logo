#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

int main () {

    int gd = DETECT, gm;

    initgraph(&gd,&gm, "");

      setbkcolor(COLOR(169, 169, 169)); 
    cleardevice();


 setlinestyle(SOLID_LINE, 0, 10); 
    //YELLOW
    setcolor(YELLOW);
    circle(190,310,90);
    //BLUE
    setcolor(BLUE);
    circle(90,220,90);
    //BLACK
    setcolor(BLACK);
    circle(290,220,90);
    //GREEN
    setcolor(GREEN);
    circle(390,310,90);
    //RED
    setcolor(RED);
    circle(490,220,90);
    

    getch();

    closegraph();
}