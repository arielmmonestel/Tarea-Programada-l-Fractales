/*Dibujo de Triángulo de Sierpinski*/
#ifndef SIERPINSKI_H
#define SIERPINSKI_H
#include <iostream>
#include "Constants.h"
#include "Drawing.h"

//#define POS_COUNT_TO_ADVANCE 6;
//#define DEFAULT_ITERATIONS 50;

class Sierpinski : public Drawing{

private:

    DrawInstructions toInsert1 = DrawInstructions::I;

    void IniciarLista ()
    {
        ListaInstrucciones.clear();
        ListaInstrucciones.append(DrawInstructions::D);
        ListaInstrucciones.append(DrawInstructions::D);
    }

    void Cambio()
    {
        /* Si en toInsert es D lo cambia a I
            Si es I lo cambia a D
        */
        if(toInsert1 == DrawInstructions::D)
           toInsert1 = DrawInstructions::I;
        else
            toInsert1 = DrawInstructions::D;
    }

    void IncluirAvanze()
    {
        /* Inserta una A intercalada a lo largo de la lista */
        ListaInstrucciones.goToStart();
        int k = ListaInstrucciones.getSize()*2;
        for(ListaInstrucciones; ListaInstrucciones.getPos() < k; ListaInstrucciones.next())
        {
            ListaInstrucciones.next();
            ListaInstrucciones.insert(DrawInstructions::A);
        }
    }

    void BuscarInsertar()//Este metodo crea la lista con las instrucciones
    {
        ListaInstrucciones.goToStart();
        toInsert1 = ListaInstrucciones.getElement();
        Cambio();

        for(ListaInstrucciones; ListaInstrucciones.getPos() < ListaInstrucciones.getSize()+1; ListaInstrucciones.next())
       {
                ListaInstrucciones.insert(toInsert1);
                ListaInstrucciones.next();
                ListaInstrucciones.insert(toInsert1);
                ListaInstrucciones.next();
                Cambio();
        }
     }

public:

    Sierpinski()
    {
        gradosAumentar = 60;
    }

    void GenerarLista(int pIteraciones)//Este metodo realiza la lista segun las pIteraciones que reciba
    {
        IniciarLista();
        for(int i = 0; i < pIteraciones; i++)
            BuscarInsertar();
        IncluirAvanze();
    }
};

#endif
