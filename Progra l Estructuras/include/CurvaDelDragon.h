#ifndef CURVADELDRAGON_H
#define CURVADELDRAGON_H
#include  "DoubleLinkedList.h"
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
        ListaInstrucciones.append(DrawInstructions::A);
    }

    void buscarInsertar(){
        DrawInstructions toInsert = DrawInstructions::D;
        for(ListaInstrucciones.goToStart();ListaInstrucciones.getPos() <= ListaInstrucciones.getSize();ListaInstrucciones.next()){

           //ListaInstrucciones.goToStart();

            ListaInstrucciones.insert(DrawInstructions::A);
            ListaInstrucciones.insert(toInsert);
            ListaInstrucciones.next();
            ListaInstrucciones.next();
            ListaInstrucciones.next();
            if(toInsert == DrawInstructions::D){
                cout << "cambio D por I" << endl;
                toInsert = DrawInstructions::I;

                continue;

            }

            if(toInsert == DrawInstructions::I){
                toInsert = DrawInstructions::D;
                cout << "cambio I por D" << endl;
            }

        }


  /*
        DrawInstructions AtoInsert=DrawInstructions::A;
        for(ListaInstrucciones.goToEnd();ListaInstrucciones.getPos()>0;ListaInstrucciones.previous()){
                    ListaInstrucciones.insert(AtoInsert);

         if (ListaInstrucciones.getElement()==DrawInstructions ::D ){
                ListaInstrucciones.insert(AtoInsert);
             //   ListaInstrucciones.next();
                continue;
         }
         if (ListaInstrucciones.getElement()==DrawInstructions ::I ){
            ListaInstrucciones.insert(AtoInsert);
           // ListaInstrucciones.next();
        }
        */



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
