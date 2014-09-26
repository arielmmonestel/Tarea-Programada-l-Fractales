#ifndef DRAWING_H
#define DRAWING_H
#define PI 3.14159265358979
#include <iostream>
#include  "DoubleLinkedList.h"
#include "DNode.h"
#define X_WINDOW 1360
#define Y_WINDOW 655
class Drawing {

public:

    //Largo de la linea dibujada
    const int DISTANCIA =3;
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

        int nuevaDistanciaX = DISTANCIA * cos(grados*PI/180);
        int nuevaDistanciaY = DISTANCIA * sin(grados*PI/180);
        int x2 = x +  nuevaDistanciaX;
        int y2 = y +  nuevaDistanciaY;



        //srand(time(NULL));
        setlinestyle(CENTER_LINE,1,2);
/*Utilizada para deterrminar el tipo de linea que sera usada por el usuario.
 Requiere 3 argumentos. El primero es el que define el tipo de linea, soporta:
 CENTER_LINE, DOTTED_LINE, DASHED_LINE, USERBIT_LINE o SOLID_LINE. El segundo
 es el patron y el tercero el ancho de la linea.*/

        setcolor(COLOR(rand() % 256, rand() % 256, rand() % 256));
        line (x, y, x2, y2);
        //cout<<"X: "<<x2<<", Y: "<<y2<<", COS: "<<nuevaDistanciaX<<", SEN: "<<nuevaDistanciaY<<endl;
        //Sleep(500);
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

        getch();
        closegraph();

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
