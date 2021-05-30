#pragma once


template<class T>
void LinkedList<T>::operator = (Array<T> &Y)
{
    Clean();
     for( int i = 0; i < Y.size; i++ )
    {
        Insert_end(Y.self[i]);
    }
}

template<class T>
void Array<T>:: operator = (LinkedList<T> &Y)
{
    size = Y.end->index + 1;

    for (int i = 0; i < size ; i++)
    {
        Y.Traverse_Next();
        self[i] = *(Y.Current_Data);
    }

    Y.current = nullptr;

}