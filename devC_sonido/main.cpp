#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
    PlaySound("sonido.wav", NULL, SND_ASYNC);
    system("PAUSE");
    return 0;
}
