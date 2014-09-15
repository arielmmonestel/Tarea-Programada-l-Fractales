#include <iostream>‪
#include <winbgim.h>

using namespace std;

int main()
{
initwindow (600,400);

do{
rectangle(mousex(),mousey(),100,100);
cleardevice();
}while(!kbhit());

}
