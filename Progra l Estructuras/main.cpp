#include <iostream>‪
#include <winbgim.h>
#include <math.h>
#include <time.h>
#include <stdexcept>
#include "Constants.h"
#include "LevyCCurve.h"
#include "CurvaDelDragon.h"
#include  "DoubleLinkedList.h"

using namespace std;

int distancex = 45;
int distancey = 45;



int main()
{


    srand(time(NULL));
    LevyCCurve curva;

    curva.GenerarLista(6);
    curva.getLista();
    curva.drawFractal();
    getch();
    closegraph();



}
