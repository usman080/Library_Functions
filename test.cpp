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
    test t;t.x=100;
    Queue<int> a;
    Queue<test> happy;
    happy.push(t);
    a.push(1);
    a.push(2);

    cout<<" Test Get by  function : "<<happy.get(0).x<<endl;
    cout<<" Get by  function : "<<a.self.get_by_index(0);


    cout<<"\n Data : "<<a.front();
    a.pop();
    cout<<"\n Data : "<<a.front();
    return 1;
}