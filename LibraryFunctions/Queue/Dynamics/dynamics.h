//
// Created by Onkar Ingale on 30-05-2021.
//
#pragma once
#ifndef LIBRARY_FUNCTIONS_DYNAMICS_H
#define LIBRARY_FUNCTIONS_DYNAMICS_H


#include <LibraryFunctions/Queue/Core.h>

template<class T>
void Queue<T>::push(T obj) {
    self.Insert_end(obj);
    update_size();
}

template<class T>
void Queue<T>::push_rear(T obj) {
    self.Insert_start(obj);
    update_size();

}

template<class T>
T Queue<T>::front() {
    return self.start->obj;
}

template<class T>
T Queue<T>::back_rear() {
    return self.end->obj;
}

template<class T>
void Queue<T>::pop() {
    self.Delete_start();
    update_size();
}

template<class T>
void Queue<T>::pop_back() {
    self.Delete_end();
    update_size();
}

template<class T>
void Queue<T>::Clean() {
    if((is_empty()) == 0 )
    {
        self.Clean();
        update_size();
    }
}

template<class T>
bool Queue<T>::is_empty() {
    if(self.start != nullptr)
        return 0;
    else
    {
        std::cout<<"\n Queue is Empty. \n";
        return 1;
    }
}

template<class T>
T Queue<T>::get(int i) {
    return self.get_by_index(i);
}

template<class T>
void Queue<T>::update_size() {
    if(self.end == nullptr)
    {
        size = 0;
    }
    else
    {
        size = self.end->index +1;
    }

}


#endif //LIBRARY_FUNCTIONS_DYNAMICS_H
