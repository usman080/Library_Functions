#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
#pragma once
using namespace std;

/*

 nullptr: helps to indicate if the array is Created or not; 
 self: self is the array the Overall Class & Function Operates on.

 Constructors : 
 Array()  :  It is a Idle Constructor. //Planned for future use
 Array(s) : Takes Parameter of _size and Creates the Array

 Functions  : 
 Create(s) : Takes _size as parameter and Creates the array

 Sort()         : Sorts the Array in default of Ascending Format
 Sort_Ascend()  : Sorts the Array Ascending Format
 Sort_Descend() : Sorts the Array Descending Format

 Print() : Prints the Array till its _size

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
private:
    T *self = nullptr; //if your compiler gives error : ‘nullptr’ was not declared in this scoped, Visit Code Guidelines Provided at Repository
    void Create(size_t s);
    size_t _size = 0;

public:
    //Constructors
    Array();
    explicit Array(size_t s);
    //Destructor
    ~Array();
    //Functions
    size_t size();

    void Clean();
    void Print();
    void Resize(size_t re_size);
    void validate();

    void delete_at_index(size_t location);
    //Operator Overloading
    T &operator[](int i);
    void operator += (Array &Y);
    void operator = (LinkedList<T> &Y);
};
