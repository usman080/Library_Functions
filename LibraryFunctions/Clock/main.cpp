#include<iostream>

#include"Clock.h"
using namespace std;

int main()
{
    Stopwatch x;
    x.start();
    x.print("\n ");
    x.stop();
    x.print("\n ");
    return 1;
}
