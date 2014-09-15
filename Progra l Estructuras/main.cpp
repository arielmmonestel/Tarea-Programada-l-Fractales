#include <iostream>‪
#include <winbgim.h>
#include "LinkedList.h"
using namespace std;

int main()
{
initwindow (600,400);

do{
rectangle(mousex(),mousey(),100,100);
cleardevice();
}while(!kbhit());

    initwindow (600,400);
    getch();
    closegraph();

}
