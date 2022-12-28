//
// Created by Onkar Ingale on 28-12-2022.
//

#ifndef NEW_LIBRARY_FUNCTION_CORE_ARRAY_H
#define NEW_LIBRARY_FUNCTION_CORE_ARRAY_H
#include <iostream>
#include "../Exception/LibraryFunctionException.h"

/*
 *
 self: self is the array the Overall Class & Function Operates on.
 Constructors :
 Array()  :  It is a Idle Constructor. //Planned for future use
 Array(s) : Takes Parameter of _size and Creates the Array
 Functions  :
 create(s) : Takes _size as parameter and Creates the array
 resize(re_size) : Resize function takes re_size as parameter, so you can Expand  or Compress the Array

 validate(): validate Function helps for checking if the array is created or not;
 Operators  :
 operator [] : Returns the Array from the Specific location
                Eg: X[i] Actually Returns X.self[i]
                It gives the flex for the Programmer and not to always worry about the X.self
 operator += : Merges the Array so don't need to write a chunk code to just Merge a array.
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
    T *self = nullptr;
    void create(size_t s);
    size_t _size = 0;
    void validate();

public:
    //Constructors
//    Array();
    explicit Array(size_t s);
    //Destructor
    ~Array();
    //Functions
    size_t size();
    void clean();
    void resize(size_t re_size);
    void remove_at_index(size_t index);
    //Operator Overloading
    T &operator[](int i);
    void operator += (Array &Y);
//    void operator = (LinkedList<T> &Y);
};

//Constructors///////////////
//template <class T>
//Array<T>::Array()= default;

template <class T>
Array<T>::Array(size_t s)
{
    create(s);
}
//Destructor//////////////
template<class T>
Array<T>::~Array()= default;

//Functions///////////////

template<class T>
size_t Array<T>::size()
{
    return _size;
}


template <class T>
void Array<T>::create(size_t s)
{

    if(self == nullptr)//if your compiler gives error :‘nullptr’ was not declared in this scope, Visit Code Guidlines Provided at Repository
    {
        _size = s;
        Array::self = new (std::nothrow) T [_size];
        //self = (T*) malloc(sizeof(T) * _size);
        if(Array::self ==  nullptr)
        {

            throw LibraryFunctionException("Error in Allocation of Memory for Array");
        }
    }
    else if(self!=nullptr)
    {
        throw LibraryFunctionException(" The Array has already been Created.");
    }
}

// template <class T>
// void Array<T>::Destroy()
// {
//     Array::~Array();
// }

template <class T>
void Array<T>::clean()
{
    validate();
    delete [] self;
    self = nullptr;
    _size = 0;
}

template <class T>
void Array<T>::remove_at_index(size_t index)
{
    validate();
    if (index > _size-1)
    {
        throw LibraryFunctionException("Invalid Index for remove at index.");
    }
    T *temp;
    size_t new_size = _size - 1;
    temp = new T [new_size];
    for (int i=0; i < index; i++)
        temp[i] = self[i];
    for(size_t i=index, j= index + 1; i < new_size; i++,j++)
        temp[i] = self[j];
    delete [] self;
    self = new T[new_size];
    _size = new_size;
    for(int i=0; i < _size; i++)
        self[i] = temp[i];
    delete [] temp;
}

template <class T>
void Array<T>::resize(size_t re_size)
{
    validate();
    T *temp = new T [_size];
    for(int i = 0; i < _size; i++)
    {
        temp[i] = self[i];
    }
    delete [] self;

    self = new T [re_size];
    for(int i=0;i<re_size;i++)
        self[i] = temp[i];
    _size = re_size;
    delete [] temp;
}

template <class T>
void Array<T>::validate()
{
    if(self == nullptr)
    {
        throw LibraryFunctionException("The Array has not been Created.");
    }
}

//Operator Overloading

template<class T>
T& Array<T>::operator[](int i)
{
    if( (i<0) || (i >= _size) )
    {
//        throw std::runtime_error("Error: Array out of bound");
        throw LibraryFunctionException("Error: Array out of bound");
    }
    return self[i];
}

//template<class T>
//void Array<T>::operator = (Array &Y)
//{
//    _size = Y._size;
//    for (int i = 0; i <_size ; ++i)
//    {
//        self[i] = Y.self[i];
//    }
//}

template<class T>
void Array<T>::operator += (Array &Y)
{
    T *temp;
    int i,j=0;
    size_t total_size = _size + Y._size;
    temp = new (std::nothrow) T [total_size];
    for(i=0; i < _size; i++)
    {
        temp[i] = self[i];
    }
    for(i=_size; i < total_size; i++)
    {
        temp[i] = Y[j];
        j++;
    }
    delete [] self;
    self = new (std::nothrow) T [total_size];
    for(i=0;i<total_size;i++)
    {
        self[i] = temp[i];
    }
    _size = total_size;
    delete [] temp;
    //return;
}



#endif //NEW_LIBRARY_FUNCTION_CORE_ARRAY_H
