#include <iostream>‪
#include <winbgim.h>
#include <math.h>
#include <time.h>
#include "DoubleLinkedList.h"
#include "Constants.h"
#include "LevyCCurve.h"

#define PI 3.14159265
using namespace std;

void drawLine(int &x, int &y, int gradosx, int gradosy){

    circle(x,y, 5);
    double cosRes = cos(gradosx*PI/180);
    double sinRes = sin(gradosy*PI/180);
    int x2 = x + 45 * (cosRes == 1 ? 0 : cosRes);
    int y2 = y + 45 * (sinRes == 1 ? 0 : sinRes);
    cout << x2 << "," << y2 << endl;
    //srand(time(NULL));

    setcolor(COLOR(rand() % 256, rand() % 256, rand() % 256));
    line (x, y, x2, y2);
    x = x2;
    y = y2;
}


int main()
{

    //10347
    if(0){
        cout << "hola "<< endl;
    }
    cout<< cos(0 * PI / 180) << endl;

    cout<< 45 / 2 << endl;
    srand(time(NULL));
    LevyCCurve curva;

    curva.GenerarLista(2);
    curva.getLista();
    initwindow (1200,900);
    int x = 1200/2;
    int y = 900/2;

    drawLine(x, y, 45, 45);
    drawLine(x, y, -45, 0);

    //drawLine(x, y, -45, 45);

    /*circle(x,y, 10);

    setcolor(COLOR(12,100,0));
    line (x, y, x2, y2);



    setcolor(COLOR(255,255,255));
    x2 = x + 45;
    y2 = y - 45;
    circle(x,y, 10);
    line (x, y, x2, y2);*/

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
