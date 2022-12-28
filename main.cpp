#include <iostream>
#include "Array/Array.h"
#include "LibraryFunctions.h"
using namespace std;


bool cmp(int &a,int &b)
{
    if (a>b)
        return true;
    return false;
}

int main() {

    BST<int> a(cmp);

    a.insert(1);

    a.insert(2);

    a.insert(3);

    auto iter = a.getIterator();


    while (iter.hasNext())
    {
        int data = iter.next();
        cout<<" "<<data;

    }

//    LinkedList<int>  a;
//    for (int i = 0; i < 10; ++i) {
//        a.add(i+1);
//    }
//
//    auto iter = a.getStart();
//    while (iter!= nullptr)
//    {
//        cout<<" "<<iter->obj;
//        iter = iter->next;
//
//    }
//    for (int i = 0; i < 10; ++i) {
//        a.deleteEnd();
//    }
//     iter = a.getStart();
//    while (iter!= nullptr)
//    {
//        cout<<" "<<iter->obj;
//        iter = iter->next;
//
//    }



    return 1;
}
