//
// Created by Onkar Ingale on 24-12-2020.
//
#include "LibraryFunctions.h"

int main()
{
    Array<int> X(3);
    Array<int> Y(3);
    X[0] = 1;
    X[1] = 2;
    X[2] = 3;
    Y = X;
    Y.Sort_Descend();
    X.Print();
    Y.Print();
    X+=Y;
    X.Print();
    Y.Print();
    X.Clean();
    X.Print();

    return 1;
}
