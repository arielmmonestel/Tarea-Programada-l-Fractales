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



static int mostrarMenu(){//Metodo para  imprimir el menu principal en pantalla con un Switch a cada tipo de lista.

    bool salir = false;

    while(!salir ){

    int opcion;

cout <<(" _______ ______ _______ ______ _______ _______ _____   _______ _______ ")<< endl;
cout <<("|    ___|   __ \   _    |      |_     _|   _   |     |_|    ___|     __|")<< endl;
cout <<("|    ___|      <       |   ---| |   | |       |       |    ___|__     |")<< endl;
cout <<("|___|   |___|__|___|___|______| |___| |___|___|_______|_______|_______|")<< endl;
cout <<("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")<< endl;
cout <<("                                         ")<< endl;
cout<< (" Seleccione el fractal que desee crear:  ~")<< endl;
cout<< ("~ 1. Curva del Dragon                    ~")<< endl;
cout<< ("~ 2. Curva de punta de flecha Sierpinsk  ~")<< endl;
cout<< ("~ 3. Curva de Levy C                     ~")<< endl;
cout<< ("~ 4. Salir                               ~")<< endl;
cin>>opcion;

    return opcion;

    }
}



int main()
{

    mostrarMenu();


bool salir = false;
while(!salir)
{
    switch(mostrarMenu()){ //Switch para el menu principal

        case 1: srand(time(NULL));
                CurvaDelDragon  curva;
                curva.GenerarLista(11);
                curva.drawFractal();
                getch();
                closegraph();
                initwindow (600,400);break;
        case 2: srand(time(NULL));
                LevyCCurve  curva1;
                curva1.GenerarLista(11);
                curva1.drawFractal();
                getch();
                closegraph();
                initwindow (600,400);break;

        case 3: srand(time(NULL));
                LevyCCurve  curva2;
                curva2.GenerarLista(11);
                curva2.drawFractal();
                getch();
                closegraph();
                initwindow (600,400);
                break;

        case 4: salir = true; break;
        default: cout<<"Error, opcion no valida"<< endl; break;
    }
}

    return 0;
/*    CurvaDelDragon curva;
    curva.GenerarLista(2);
    curva.getLista();
*/
/*
    srand(time(NULL));
    LevyCCurve  curva;

    //initwindow (1200,900);

    curva.GenerarLista(11);
    //curva.getLista();
    curva.drawFractal();


    getch();
    closegraph();


initwindow (600,400);
/*
do{
rectangle(mousex(),mousey(),100,100);
cleardevice();
}while(!kbhit());

    initwindow (600,400);
    getch();
    closegraph();*/

}
