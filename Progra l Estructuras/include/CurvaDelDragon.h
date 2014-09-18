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
        //ListaInstrucciones.append(DrawInstructions::A);
        ListaInstrucciones.append(DrawInstructions::D);
    }

    void buscarInsertar(){
        DrawInstructions toInsert = DrawInstructions::D;
        for(ListaInstrucciones.goToStart();ListaInstrucciones.getPos() <= ListaInstrucciones.getSize();ListaInstrucciones.next()){

           //ListaInstrucciones.goToStart();
           //ListaInstrucciones.insert(DrawInstructions::A);
            ListaInstrucciones.insert(toInsert);

            ListaInstrucciones.next();
            if(toInsert == DrawInstructions::D){
                cout << "cambio D por I" << endl;
                toInsert = DrawInstructions::I;
                //continue;
                break;
            }

            if(toInsert == DrawInstructions::I){
                toInsert = DrawInstructions::D;
                cout << "cambio I por D" << endl;

            }
            //ListaInstrucciones.next();
            //cout << "Me movi una posicion" << endl;

            //cout << "inserte la I" << endl;

            //ListaInstrucciones.goToStart();
            //cout << "Me fui al inicio" << endl;



        }

    }


/*


DrawInstructions currentElement = ListaInstrucciones.getElement();


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

*/

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
