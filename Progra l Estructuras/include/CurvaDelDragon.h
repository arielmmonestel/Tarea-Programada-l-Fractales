#ifndef CURVADELDRAGON_H
#define CURVADELDRAGON_H
#include  "DoubleLinkedList.h"
#include "DNode.h"
#include "Constants.h"
#include "Drawing.h"
#define POS_COUNT_TO_ADVANCE 6;

#define DEFAULT_ITERATIONS 50;



class CurvaDelDragon: public Drawing{

    private:

        //DoubleLinkedList<DrawInstructions> ListaInstrucciones;

    void iniciarLista(){
        ListaInstrucciones.clear();

        ListaInstrucciones.append(DrawInstructions::D);
        ListaInstrucciones.append(DrawInstructions::A);
    }

    void buscarInsertar(){//Este metodo crea la lista con las instrucciones
        DrawInstructions toInsert = DrawInstructions::D;
        for(ListaInstrucciones.goToStart();ListaInstrucciones.getPos() <= ListaInstrucciones.getSize();ListaInstrucciones.next()){

            ListaInstrucciones.insert(DrawInstructions::A);
            ListaInstrucciones.insert(toInsert);
            ListaInstrucciones.next();
            ListaInstrucciones.next();
            ListaInstrucciones.next();

            if(toInsert == DrawInstructions::D){
                toInsert = DrawInstructions::I;

                continue;

            }

            if(toInsert == DrawInstructions::I){
                toInsert = DrawInstructions::D;
            }

        }




    }



    public:

        CurvaDelDragon() {
            gradosAumentar = 90;
        }
        virtual ~CurvaDelDragon() {}

        void GenerarLista(int pIteraciones){ //Este metodo realiza la lista segun las pIteraciones que reciba
            iniciarLista();

            for(int i = 0; i < pIteraciones; i++)
            {
                buscarInsertar();
            }

        }


};

#endif // CURVADELDRAGON_H
