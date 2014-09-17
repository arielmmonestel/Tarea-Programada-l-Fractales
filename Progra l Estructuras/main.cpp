#include <iostream>‪
#include <winbgim.h>
#include <math.h>

#include "Constants.h"
#include "LevyCCurve.h"
#include  "DoubleLinkedList.h"
#include <stdexcept>
using namespace std;


int main()
{

    //10347

    LevyCCurve curva;

    curva.GenerarLista(2);
    curva.getLista();
    initwindow (1200,900);
    int x = 1200/2;
    int y = 900/2;
    /*circle(x,y, 10);
    int x2 = x + 45;
    int y2 = y + 45;
    setcolor(COLOR(12,100,0));
    line (x, y, x2, y2);

    x = x2;
    y = y2;

    setcolor(COLOR(255,255,255));
    x2 = x + 45;
    y2 = y - 45;
    circle(x,y, 10);
    line (x, y, x2, y2);*/

    lineto(x,y);

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
