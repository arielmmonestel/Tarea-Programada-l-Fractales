#ifndef CURVADELDRAGON_H
#define CURVADELDRAGON_H
#include  "LinkedList.h"
#include "Nodo.h"
#include "Constants.h"

#define POS_COUNT_TO_ADVANCE 6;

#define DEFAULT_ITERATIONS 50;



class CurvaDelDragon
{
    private:

        LinkedList<DrawInstructions> ListaInstrucciones;

    void iniciarLista(){
        ListaInstrucciones.clear();
        ListaInstrucciones.append(DrawInstructions::D);
    }

    void buscarInsertar(){

        for(ListaInstrucciones.goToStart();ListaInstrucciones.getPos()<ListaInstrucciones.getSize();ListaInstrucciones.next()){
             int currentPost = ListaInstrucciones.getElement();



             if (ListaInstrucciones.getPrevious()== ListaInstrucciones.getElement()){

                if (ListaInstrucciones.getElement() == DrawInstructions ::D){
                    ListaInstrucciones.append(DrawInstructions::I)
                }

                if (ListaInstrucciones.getElement() == DrawInstructions ::I){
                    ListaInstrucciones.append(DrawInstructions::D)
                }

             currentPost+= POS_COUNT_TO_ADVANCE;
             ListaInstrucciones.goToPos(currentPost);

             }

             if (ListaInstrucciones.getPrevious()!= ListaInstrucciones.getElement()){

                if (ListaInstrucciones.getElement() == DrawInstructions ::D){
                    ListaInstrucciones.append(DrawInstructions::D)
                }

                if (ListaInstrucciones.getElement() == DrawInstructions ::I){
                    ListaInstrucciones.append(DrawInstructions::I)
                }
             currentPost+= POS_COUNT_TO_ADVANCE;
             ListaInstrucciones.goToPos(currentPost);

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
