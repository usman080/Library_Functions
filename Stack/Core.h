//
// Created by Onkar Ingale on 28-12-2022.
//

#ifndef NEW_LIBRARY_FUNCTION_CORE_Stack_H
#define NEW_LIBRARY_FUNCTION_CORE_Stack_H
#include "../Exception/LibraryFunctionException.h"
#include "../LinkedList/LinkedList.h"


template<class T>
class Stack
{

    LinkedList<T> self;
public:
    T top();

    void pop();

    size_t size();

    bool isEmpty();

public:
    Stack()
    = default;

    void push(T data);
};

template<class T>
T Stack<T>::top()
{
    return self.getEnd()->obj;
}
template<class T>
void Stack<T>::pop()
{
    if (isEmpty())
        throw LibraryFunctionException(" Stack is Empty");
    self.deleteEnd();
}
template<class T>
size_t Stack<T>::size()
{
    return self.size();
}
template<class T>
bool Stack<T>::isEmpty()
{
    if (self.size()==0)
    {
        return true;
    }
    return false;
}

template<class T>
void Stack<T>::push(T data)
{
    self.add(data);
}

#endif //NEW_LIBRARY_FUNCTION_CORE_Stack_H
