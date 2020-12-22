#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

/*

 nullptr: helps to indicate if the array is Created or not; 
 self: self is the array the Overall Class & Function Operates on.

 Constructors : 
 Array()  :  It is a Idle Constructor. //Planned for future use
 Array(s) : Takes Parameter of size and Creates the Array

 Functions  : 
 Create(s) : Takes size as parameter and Creates the array 

 Sort()         : Sorts the Array in default of Ascending Format
 Sort_Ascend()  : Sorts the Array Ascending Format
 Sort_Descend() : Sorts the Array Descending Format

 Print() : Prints the Array till its size 

 Resize(re_size) : Resize function takes re_size as parameter so you can Expand  or Compress the Array 
    
 validate(): validate Function helps for checking if the array is created or not;

 Operators  :
 operator [] : Returns the Array from the Specific location
                Eg: X[i] Actually Returns X.self[i]
                It gives the flex for the Programmer and not to always worry about the X.self
 operator += : Merges the Array so dont need to wite a chunk code to just Merge a array.
                Eg: X.self = {1,2,3,4} and 
                    Y.self = {5,6,7,8}
                    X += Y
                    gives 
                    X.self = {1,2,3,4,5,6,7,8}
  
*/


template<class T>
class Array
{
    public:
    
    T *self = nullptr; //if your compiler gives error : ‘nullptr’ was not declared in this scopedd, Visit Code Guidlines Provided at Repository
    unsigned long long int size;

    //Constructors
    Array();
    Array(unsigned long long int s); 

    //Functions 
    Create(unsigned long long int s);

    Sort();
    Sort_Ascend();
    Sort_Descend();

    Print();

    Resize(unsigned long long int re_size);

    validate();

    //Operator Overloading
    /*
     
    */
    T &operator[](int i)
    {
        if( (i<0) || (i >= size) )
        {
            cout<<endl<<"Error: Array out of bound";
            exit(1);
        }
        return self[i];
    }

    T &operator += (Array y)
    {
       T *temp;
       int i,j=0;
       unsigned long long int total_size = size + y.size;
       temp = new (nothrow) T [total_size];
       for(i=0;i<size;i++)
       {
           temp[i] = self[i];
       }
       for(i=size;i<total_size;i++)
       {
           temp[i] = y[j];
           j++;
       }
       delete [] self;
       self = new (nothrow) T [total_size];
       for(i=0;i<total_size;i++)
       {
           self[i] = temp[i];
       }
       size = total_size;
       delete [] temp;
    }
};
