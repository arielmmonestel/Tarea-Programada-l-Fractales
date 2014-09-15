#include "Nodo.h"

Nodo::Nodo()
{
    E element;
    Node<E> * next;
    Node(pElement,pNext = NULL){
        element = pElement;
        next = pNext;
    }
        Node(Node<E>*pNext = NULL){
        next = pNext;
        }
}

Nodo::~Nodo()
{

}
