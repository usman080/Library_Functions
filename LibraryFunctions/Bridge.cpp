#pragma once


#include "Core_Array.h"

template<class T>
void LinkedList<T>::operator = (Array<T> &Y)
{
    Clean();
     for(int i = 0; i < Y._size; i++ )
    {
        Insert_end(Y.self[i]);
    }
}

template<class T>
void Array<T>:: operator = (LinkedList<T> &Y)
{
    _size = Y.end->index + 1;

    for (int i = 0; i < _size ; i++)
    {
        Y.Traverse_Next();
        self[i] = *(Y.Current_Data);
    }

    Y.current = nullptr;

}
