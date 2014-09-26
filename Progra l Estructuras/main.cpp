#include <iostream>‪
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdexcept>
#include "Constants.h"
#include "LevyCCurve.h"
#include "Sierpinski.h"
#include "Otros.h"
#include "CurvaDelDragon.h"
#include  "DoubleLinkedList.h"

using namespace std;

int distancex = 45;
int distancey = 45;

int ObtenerEntrada(string mensaje, int inicio, int fin)
{
    int res = 0;
    string stringRes = "";

    cout << mensaje;
    try{
        cin >> stringRes;
        res = atoi(stringRes.c_str()); // convertir a entero
    }catch(...){
        res = inicio--;
    }


    if(res > fin || res < inicio )
    {
        cout << "Digite solo numeros del " << inicio << " al " << fin << endl;

        return ObtenerEntrada(mensaje, inicio, fin);
    }

    return res;



}


int mostrarMenu(){//Metodo para  imprimir el menu principal en pantalla con un Switch a cada tipo de lista.



    int opcion;


    cout <<("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ")<< endl;
    cout <<(" Ariel Montero Monestel                        Wilberth Chaves Sandi  ")<< endl;
    cout <<("                         Fabian Monge Garcia                          ")<< endl;
    cout <<("                                                                      ")<< endl;
    cout <<("                                                                      ")<< endl;
    cout <<("                E S T R U C T U R A S   D E   D A T O S               ")<< endl;
    cout <<("                                                                      ")<< endl;
    cout <<("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")<< endl;

    cout <<(" _______ ______ _______ ______ _______ _______ _____   _______ _______ ")<< endl;
    cout <<("|    ___|   __ \   _    |      |_     _|   _   |     |_|    ___|     __|")<< endl;
    cout <<("|    ___|      <       |   ---| |   | |       |       |    ___|__     |")<< endl;
    cout <<("|___|   |___|__|___|___|______| |___| |___|___|_______|_______|_______|")<< endl;
    cout <<("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")<< endl;
    cout <<("                                                        ")<< endl;
    cout<< ("                Seleccione el fractal que desee crear:       ")<< endl;
    cout<<("")<<endl;
    cout<< ("                 1. Curva del Dragon                     ")<< endl;
    cout<<("")<<endl;
    cout<< ("                 2. Curva de punta de flecha Sierpinski   ")<< endl;
    cout<<("")<<endl;
    cout<< ("                 3. Curva de Levy C                      ")<< endl;
    cout<<("")<<endl;
    cout<< ("                 4. Salir                                ")<< endl;
    cout<<("")<<endl;
    opcion = ObtenerEntrada("opcion: ",1 , 5);

    return opcion;


}



int main()
{
    //setaspectratio(60, 40);
    CurvaDelDragon curva;
    Sierpinski curva1;
    LevyCCurve curva2;
    Otros curva5;

    srand(time(NULL));
    bool salir = false;
    while(!salir)
    {
        int opcion = mostrarMenu();
        switch(opcion){ //Switch para el menu principal

            case 1:
                cout <<" "<<endl;
                cout<<"Cargando ..."<<endl;
                curva.GenerarLista(13);
                curva.drawFractal();
                break;

            case 2:
                cout <<" "<<endl;
                cout<<"Cargando ..."<<endl;
                curva1.GenerarLista(9);
                curva1.drawFractal();
                break;

            case 3:
                cout <<" "<<endl;
                cout<<"Cargando ..."<<endl;
                curva2.GenerarLista(15);
                curva2.drawFractal();
                break;
            case 5:
                cout <<" "<<endl;
                cout<<"Cargando ..."<<endl;
                curva5.GenerarLista(1);
                curva5.drawFractal();
                break;

            case 4:
                salir = true;
                break;

            default:
                cout<<"Error, opcion no valida"<< endl;
                //break;
        }
    }

    return 0;

}
