#ifndef DRAWING_H
#define DRAWING_H
#define PI 3.14159265
#include  "DoubleLinkedList.h"
#include "DNode.h"

class Drawing {

public:

    //Largo de la linea dibujada
    const int DISTANCIA = 15;
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




        int x2 = floor(x + DISTANCIA * cos(grados*PI/180));
        int y2 = floor(y + DISTANCIA * sin(grados*PI/180));

        //srand(time(NULL));
        setlinestyle(SOLID_LINE,6,4);
/*Utilizada para deterrminar el tipo de linea que sera usada por el usuario. Requiere 3 argumentos. El primero es el que define el tipo de linea, soporta: CENTER_LINE, DOTTED_LINE,
DASHED_LINE, USERBIT_LINE o SOLID_LINE. El segundo es el patron y el tercero el ancho de la linea.*/

        setcolor(COLOR(rand() % 256, rand() % 256, rand() % 256));
        line (x, y, x2, y2);


        //circle(x,y, 20 + (rand() % 30));
        x = x2;
        y = y2;
    }

    void drawFractal(){

        initwindow (1200,900);
        x = 1200/1.3;
        y = 900/2;

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
