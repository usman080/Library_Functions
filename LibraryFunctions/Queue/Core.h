#pragma once
#include"../../LibraryFunctions.h"


template<class T>
class Queue
{
    public:
    LinkedList<T> self;

    T *CurrentData;

    //Pushers
    void push(T obj);
    void push_rear(T obj);

    //Getters
    T front();
    T back_rear();
    T get(int i);


    void pop();

    void pop_back();

    void Clean();

    bool is_empty();


};
