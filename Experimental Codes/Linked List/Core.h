//
// Created by Onkar Ingale on 15-02-2021.
//

#ifndef LINKED_LIST_CORE_H
#define LINKED_LIST_CORE_H

#include <cstdlib>
template<class T>
class LinkedList
{
public:
    class Node
    {
    public:
        T obj;
        Node *next;
    };
    Node *start = nullptr;
    Node *current = nullptr;
    T CurrentObj;


    void Traverse_Next()
    {
        if(start != nullptr)
        {
            if (current == nullptr)
                current = start;
            else
            {
                if (current != nullptr)
                    current = current->next;
            }
            CurrentObj = current->obj;
        }
    }

    void Traverse_Start()
    {
        current = start;
    }

    void Insert(T object)
    {
        Node *newp;
        Node *temp = nullptr;
        newp = (Node*) malloc(sizeof(Node));
        newp->obj = object;
        newp->next = nullptr;
        if (start == nullptr)
        {
            start = newp;
        }
        else
        {
            temp = start;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            newp->next = nullptr;
            temp->next = newp;
        }
    }
};
#endif //LINKED_LIST_CORE_H
