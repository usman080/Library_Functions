#include <iostream>
#include "Core.h"

using namespace std;
class test
{
public:
    int x;
};
int main()
{
    test a,b,c;
    a.x =1;b.x=2;c.x =3;
    LinkedList<test> Num;
    Num.Insert(a);
    Num.Insert(b);
    Num.Insert(c);

    Num.Traverse_Next();
    cout<<"\n Number Now is  : "<<Num.CurrentObj.x;

    Num.Traverse_Next();
    cout<<"\n Number Now is  : "<<Num.CurrentObj.x;

    Num.Traverse_Next();
    cout<<"\n Number Now is  : "<<Num.CurrentObj.x;


    return 0;
}
