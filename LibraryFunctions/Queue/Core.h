#pragma once

template < class T>
class Queue
{

public:

    LinkedList<T> self;

    T* Current_Data;

    bool is__empty();
    void Clean();
    
    void Enqueue(T object);
    void Dequeue();
   
    void goto_start();
    void get_next();

};