#include"Array/Array.h"

int main()
{
    int i;
    Array<int> x(12);
    for(i=0;i<x.size;i++)
        x[i] = i;
    x.Print();
    x.Print();
    return 1;
}
