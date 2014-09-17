#ifndef CURVADELDRAGON_H
#define CURVADELDRAGON_H
#include  "DoubleDoubleLinkedList.h"
#include "DNode.h"
#include "Constants.h"

#define POS_COUNT_TO_ADVANCE 6;

#define DEFAULT_ITERATIONS 50;



class CurvaDelDragon
{
    private:

        DoubleLinkedList<DrawInstructions> ListaInstrucciones;

    void iniciarLista(){
        ListaInstrucciones.clear();
        ListaInstrucciones.append(DrawInstructions::D);
        ListaInstrucciones.append(DrawInstructions::D);
        ListaInstrucciones.append(DrawInstructions::I);
    }

    void buscarInsertar(){

        for(ListaInstrucciones.goToPos(1);ListaInstrucciones.getPos()<ListaInstrucciones.getSize();ListaInstrucciones.next()){

            //int cont = 1;
            DrawInstructions currentElement = ListaInstrucciones.getElement();
            ListaInstrucciones.goToEnd();

            if(currentElement != ListaInstrucciones.getElement()){
                if (currentElement== DrawInstructions ::D){
                    ListaInstrucciones.append(DrawInstructions::D);
                    ListaInstrucciones.append(DrawInstructions::D);


                }

                if (currentElement== DrawInstructions ::I){
                    ListaInstrucciones.append(DrawInstructions::I);
                    ListaInstrucciones.append(DrawInstructions::I);
                }


             }

             if (currentElement== ListaInstrucciones.getElement()){

                if (ListaInstrucciones.getElement() == DrawInstructions ::D){
                    ListaInstrucciones.append(DrawInstructions::D);
                    ListaInstrucciones.append(DrawInstructions::I);
                }

                if (ListaInstrucciones.getElement() == DrawInstructions ::I){
                    ListaInstrucciones.append(DrawInstructions::I);
                    ListaInstrucciones.append(DrawInstructions::D);
                }

             }


        }

    }




    public:

        CurvaDelDragon() {}
        virtual ~CurvaDelDragon() {}

        void GenerarLista(int pIteraciones){
            iniciarLista();

            for(int i = 0; i < pIteraciones; i++)
            {
                buscarInsertar();
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

#endif // CURVADELDRAGON_H
