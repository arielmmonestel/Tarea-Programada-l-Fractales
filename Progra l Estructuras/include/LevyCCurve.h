#ifndef LEVYCCURVE_H
#define LEVYCCURVE_H
#include  "LinkedList.h"
#include "Nodo.h"
#include "Constants.h"

#define POS_COUNT_TO_ADVANCE 6;

#define DEFAULT_ITERATIONS 50;

class LevyCCurve{

private:

    LinkedList<DrawInstructions> ListaInstrucciones;

    void IniciarLista (){
        ListaInstrucciones.clear();
        ListaInstrucciones.append(DrawInstructions::A);
    }



    void BuscarInsertar(){

        for(ListaInstrucciones.goToStart(); ListaInstrucciones.getPos() < ListaInstrucciones.getSize(); ListaInstrucciones.next()){

            if(ListaInstrucciones.getElement() == DrawInstructions::A){
                int currentPost = ListaInstrucciones.getPos();

                ListaInstrucciones.insert(DrawInstructions::D);
                ListaInstrucciones.insert(DrawInstructions::A);
                ListaInstrucciones.insert(DrawInstructions::I);
                ListaInstrucciones.insert(DrawInstructions::I);
                ListaInstrucciones.insert(DrawInstructions::A);
                ListaInstrucciones.insert(DrawInstructions::D);

                currentPost += POS_COUNT_TO_ADVANCE;

                ListaInstrucciones.goToPos(currentPost);
                ListaInstrucciones.remove();
            }
        }
    }

public:

    LevyCCurve() {

    }





    void GenerarLista(int pIteraciones){
        IniciarLista();

        for(int i = 0; i < pIteraciones; i++)
        {
            BuscarInsertar();
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
    }

};

#endif // LEVYCCURVE_H
