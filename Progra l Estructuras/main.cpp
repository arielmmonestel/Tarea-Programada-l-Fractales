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



int main()
{


    srand(time(NULL));
    LevyCCurve curva;

    //initwindow (1200,900);

    curva.GenerarLista(6);
    curva.getLista();
    curva.drawFractal();


    getch();
    closegraph();


/*initwindow (600,400);

do{
rectangle(mousex(),mousey(),100,100);
cleardevice();
}while(!kbhit());

    initwindow (600,400);
    getch();
    closegraph();*/

}
