/*Otro dibujo*/
#ifndef OTROS_H
#define OTROS_H
#include <iostream>
#include "Constants.h"
#include "Drawing.h"
#include <math.h>

//#define POS_COUNT_TO_ADVANCE 6;
//#define DEFAULT_ITERATIONS 50;

class Otros : public Drawing{

private:

   DrawInstructions D = DrawInstructions::D;
   DrawInstructions A = DrawInstructions::A;
    int cant = 0;
    int contador = 0;
    int potencia = 0;


    void IniciarLista ()
    {
        ListaInstrucciones.clear();
        ListaInstrucciones.append(D);
    }
    void Cambio()
    {
       if(cant!=64)
            potencia = cant*2;
        else
            cant = 0;
    }
    void Avanze()
    {
        for(int i = 0; i <= potencia; i++ )
        {
            ListaInstrucciones.insert(A);
            ListaInstrucciones.next();
        }
    }
    void BuscarInsertar()
    {
        ListaInstrucciones.goToStart();
        boolean pepe = 1;
        int c = 0;
        while(pepe)
        {
           if(contador == 7)
           {
               if(c==4)
               {
                   pepe = 0;
                   //Avanze();
               }
               contador=0;
               cant = 0;
               c++;
           }
                ListaInstrucciones.next();
                Avanze();
                ListaInstrucciones.insert(D);
                cant++;
                contador++;
                Cambio();
        }
     }

public:

    Otros()
    {
        gradosAumentar = 90;
    }

    void GenerarLista(int pIteraciones)
    {
        IniciarLista();
        for(int i = 0; i < pIteraciones; i++)
            BuscarInsertar();
    }
};
#endif
