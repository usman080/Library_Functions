#include "LibraryFunctions.h"

class Test
{
    public:
    int x;
};

int main()
{
    LinkedList<Test> A;
    Array<Test> X(10);  // Array of size 10

    // Filling the Array from 0 to 10
    for (int i = 0; i < X.size; i++)
    {
        X[i].x = i;
    }

    A = X;  // Copied the Array to LinkedList
    while (A.current != A.end)  
    {
        A.Traverse_Next();  // Traversing Next Node
        if( (*A.Current_Data).x == 5 )
            (*A.Current_Data).x = 100;
        cout<<"\n Data :"<< (*A.Current_Data).x; // Current_Data holds the address of current node.
    }
    
    
    return 1;
}
