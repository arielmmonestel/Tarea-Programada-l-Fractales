#include <iostream>‪
#include <winbgim.h>
#include <math.h>
#include "LinkedList.h"
#include "Constants.h"
#include "LevyCCurve.h"


using namespace std;

int distancex = 45;
int distancey = 45;

void printLine(int x, int y, int x2, int y2, bool rumbo){

    circle(x,y, 10);
    int x2 = x + DISTANCE / 2;
    int y2 = y + DISTANCE / 2;
    setcolor(COLOR(12,100,0));
    line (x, y, x2, y2);
}


int main()
{

    //10347

    LevyCCurve curva;

    curva.GenerarLista(5);
    curva.getLista();
    initwindow (1200,900);
    int x = 1200/2;
    int y = 900/2;


    x = x2;
    y = y2;

    setcolor(COLOR(255,255,255));
    x2 = x + (-45) / 2;
    y2 = y + (-45) / 2;
    circle(x,y, 10);
    line (x, y, x2, y2);


    x = x2;
    y = y2;

    setcolor(COLOR(0,128,255));
    x2 = x + (-45) / 2;
    y2 = y + (45) / 2;
    //y2 = 700;
    circle(x2,y2, 10);
    line (x, y, x2, y2);

    //lineto(x,y);

    //line(0,7,80,90);
    getch();
    closegraph();
    //cout << listilla.getElement() << endl;
    /*for(listilla.goToStart(); listilla.getPos() < listilla.getSize(); listilla.next()){
        cout << listilla.getElement() << endl;
    }*/

/*initwindow (600,400);

do{
rectangle(mousex(),mousey(),100,100);
cleardevice();
}while(!kbhit());

    initwindow (600,400);
    getch();
    closegraph();*/

}
