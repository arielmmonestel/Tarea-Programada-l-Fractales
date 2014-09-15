#ifndef NODO_H
#define NODO_H

template<typename E>
class Node
{
public:
        E element;
        Node<E> * next;
        Node(pElement,pNext = NULL);
        Node();

};

#endif // NODO_H
