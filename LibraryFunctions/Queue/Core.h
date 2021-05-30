#pragma once
#include"../../LibraryFunctions.h"


template<class T>
class Queue
{
    public:
    LinkedList<T> self;
    size_t size;

    T *CurrentData;

    //Pushers
    void push(T obj);
    void push_rear(T obj);

    //Poppers
    void pop();
    void pop_back();

    //Getters
    T front();
    T back_rear();
    T get(int i);


    //Miscs
    void Clean();
    bool is_empty();
    void update_size();


};
