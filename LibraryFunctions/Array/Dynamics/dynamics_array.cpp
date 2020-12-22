#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>


//Constructors///////////////
template <class T>
    Array<T>::Array(){ }

template <class T>
    Array<T>::Array(unsigned long long int s)
    {
        Create(s);
    }

//Functions///////////////
template <class T>
Array<T>::Create(unsigned long long int s)
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
                 << " You Can Use the Command .Resize(unsigned long long int size_that_have_to_be_resized)" << endl<<endl
                 << " Eg : X.Resize(100);"<<endl;
            cout<<endl<<"======================================================="<<endl;
        }
    }

template <class T>
Array<T>::Resize(unsigned long long int re_size)
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
    Array<T>::validate()
    {
        if(self == nullptr)
        {
            cout<<endl<<" The Array has not been Created."<<endl<<" Use .Create(unsigned long long int size);"<<endl<< " Eg: X.Create(100)"<<endl;
            exit(403);
        }
    }
