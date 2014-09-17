#include <iostream>‪
#include <winbgim.h>
#include <math.h>
#include <time.h>


#include "Constants.h"
#include "LevyCCurve.h"
#include "CurvaDelDragon.h"
#include  "DoubleLinkedList.h"
#include <stdexcept>

using namespace std;

const int DISTANCIA = 45;
int grados;
int x = 1200/2;
       int  y = 900/2;
void drawLine(){




        int x2 = ceil(x + DISTANCIA * cos(grados*PI/180));
        int y2 = ceil(y + DISTANCIA * sin(grados*PI/180));

        //srand(time(NULL));

        setcolor(COLOR(rand() % 256, rand() % 256, rand() % 256));
        line (x, y, x2, y2);
        x = x2;
        y = y2;
    }

int main()
{

    //10347
    if(45){
        cout << "hola "<< endl;
    }
    int a = 0.6;
    cout<< a << endl;

    cout<< 45 / 2 << endl;
    srand(time(NULL));
    LevyCCurve curva;

    //initwindow (1200,900);

    curva.GenerarLista(7);
    //curva.getLista();
    curva.drawFractal();



    /*drawLine();
    grados =- 45 - 45;
    drawLine();
    grados =+ 45;
    drawLine();*/

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
