#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename E>
class linkedList{
private:
    Node <E> * head;
    Node <E> * tail;
    Node <E> * current;
    int size;
    };
public:
    linkedList();
    ~linkedList();
    void insert (E pElement);
    void append(E pElement);
    E remove () throw runtime_error();
    void clear();
    E getElement() throw(runtime_error);
    void next();
    void previous();
    void goToStart();
    void goToEnd();
    void goToPos(int pPos) throw (runtime_error);
    int getSize();
    int getPos();

#endif // LINKEDLIST_H
