#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>


//Constructors///////////////
template <class T>
    Array<T>::Array(){ }

template <class T>
    Array<T>::Array(size_t s)
    {
        Create(s);
    }
//Destructor//////////////
template<class T>
    Array<T>::~Array(){ }

//Functions///////////////
template <class T>
void Array<T>::Create(size_t s)
{

    if(self == nullptr)//if your compiler gives error :‘nullptr’ was not declared in this scope, Visit Code Guidlines Provided at Repository
    {
        size = s;
        Array::self = new (nothrow) T [size];
        //self = (T*) malloc(sizeof(T) * size);
        if(Array::self ==  nullptr)
        {
            cout<<endl<<"Error in Allocation of Memory for Array";
            cout<<endl<<"Please Contact Developers";
            exit(-1);
        }
    }
    else if(self!=nullptr)
    {
       cout<<endl<<"======================================================="<<endl;
       cout << endl
             << " The Array has already been Created." << endl
             << " If You Want to Resize The Array,"<<endl
             << " You Can Use the Command .Resize(size_t size_that_have_to_be_resized)" << endl<<endl
             << " Eg : X.Resize(100);"<<endl;
        cout<<endl<<"======================================================="<<endl;
    }
}

// template <class T>
// void Array<T>::Destroy()
// {
//     Array::~Array();
// }

template <class T>
void Array<T>::Clean()
{
    validate();
    delete [] self;
    self = nullptr;
    size = 0;
}

template <class T>
void Array<T>::delete_current_shift_left(size_t location)
{
    T *temp;
    size_t new_size = size - 1;
    temp = new T [new_size];
    for (int i;i<location;i++)
        temp[i] = self[i];
    for(int i=location, j=location + 1; i<new_size; i++,j++)
        temp[i] = self[j];
    delete [] self;
    self = new T[new_size];
    size = new_size;
    for(int i=0;i<size;i++)
        self[i] = temp[i];
    delete [] temp;
}

template <class T>
void Array<T>::Resize(size_t re_size)
{
    validate();
    T *temp = new T [size];
    for(int i = 0;i<size;i++)
        {
            temp[i] = self[i];
        }
    delete [] self;
    
    self = new T [re_size]; 
    for(int i=0;i<re_size;i++)
        self[i] = temp[i];
    size = re_size;
    delete [] temp; 
}

template <class T>
   void Array<T>::validate()
    {
        if(self == nullptr)
        {
            cout<<endl<<" The Array has not been Created."<<endl<<" Use .Create(size_t size);"<<endl<< " Eg: X.Create(100)"<<endl;
            exit(403);
        }
    }

//Operator Overloading

template<class T>
T& Array<T>::operator[](int i)
{
    if( (i<0) || (i >= size) )
    {
        cout<<endl<<"Error: Array out of bound";
        exit(1);
    }
    return self[i];
}

template<class T>
void Array<T>::operator = (Array &Y)
{
    size = Y.size;
    for (int i = 0; i <size ; ++i)
    {
        self[i] = Y.self[i];
    }
}

template<class T>
void Array<T>::operator += (Array &Y)
{
    T *temp;
    int i,j=0;
    size_t total_size = size + Y.size;
    temp = new (nothrow) T [total_size];
    for(i=0;i<size;i++)
    {
        temp[i] = self[i];
    }
    for(i=size;i<total_size;i++)
    {
        temp[i] = Y[j];
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
    //return;
}

