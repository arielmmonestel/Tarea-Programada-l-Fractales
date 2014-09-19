#ifndef DRAWING_H
#define DRAWING_H
#define PI 3.14
#include <iostream>
#include  "DoubleLinkedList.h"
#include "DNode.h"
#define X_WINDOW 1200
#define Y_WINDOW 700
class Drawing {

public:

    //Largo de la linea dibujada
    const int DISTANCIA =45;
    int grados;
    int gradosAumentar;
    int x;
    int y;

    Drawing()
    {
        grados = 0;
        x = 0;
        y = 0;
    }

    DoubleLinkedList<DrawInstructions> ListaInstrucciones;


    void drawLine(){




        int x2 = x + DISTANCIA * cos(grados*PI/180);
        int y2 = y + DISTANCIA * sin(grados*PI/180);



        //srand(time(NULL));

        //setcolor(COLOR(rand() % 256, rand() % 256, rand() % 256));
        line (x, y, x2, y2);
        cout<<x2<<","<<y2<<endl;
        Sleep(500);
        //circle(x,y, 20 + (rand() % 30));
        x = x2;
        y = y2;
    }

    void drawFractal(){

        initwindow (X_WINDOW,Y_WINDOW);
        x = X_WINDOW/2;
        y = Y_WINDOW/2;

        if(ListaInstrucciones.getSize() == 0){
            cout << "Lista vacia" << endl;
        }
        else{
            for(ListaInstrucciones.goToStart(); ListaInstrucciones.getPos() < ListaInstrucciones.getSize(); ListaInstrucciones.next()){
                switch(ListaInstrucciones.getElement()){

                    case DrawInstructions::A:
                            drawLine();
                        break;

                    case DrawInstructions::I:
                        grados -= gradosAumentar;
                        break;
                    case DrawInstructions::D:
                        grados += gradosAumentar;
                        break;

                    }
            }
        }
    }

    void getLista(){

        for(ListaInstrucciones.goToStart(); ListaInstrucciones.getPos() < ListaInstrucciones.getSize(); ListaInstrucciones.next()){

            switch(ListaInstrucciones.getElement()){

            case DrawInstructions::A:
                cout << "A,";
                break;

            case DrawInstructions::I:
                cout << "I,";
                break;
            case DrawInstructions::D:
                cout << "D,";
                break;

            }
        }
        cout << endl;
    }


};


#endif // DRAWING_H_INCLUDED
