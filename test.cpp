//Test for Queue

#include<iostream>
#include"LibraryFunctions.h"

using namespace std;
class test
{
public:
    int x;
};
int main()
{
    Array<int> array(10);
    for (int i = 0; i < array.size(); ++i)
    {
        array[i] = i+1;
        cout<<array[i]<<' ';
    }


    return 1;
}