//
// Created by Onkar Ingale on 28-12-2022.
//

#ifndef NEW_LIBRARY_FUNCTION_CORE_LinkedList_H
#define NEW_LIBRARY_FUNCTION_CORE_LinkedList_H

#include <iostream>
#include "../Exception/LibraryFunctionException.h"

template<class T>
class LinkedList {
public:
    class Node {
    public:
        size_t index;
        T obj;    //Data Field
        LinkedList<T>::Node *next;
        LinkedList<T>::Node *prev;
    };

    T *Current_Data;    // Current Object/Data
    LinkedList<T>::Node *start = nullptr;    // Starting location of Linked List
    LinkedList<T>::Node *end = nullptr;    // Ending location of Linked List
    LinkedList<T>::Node *current = nullptr;    // Current location of Linked List


    LinkedList<T>::Node* getStart()
    {
        return start;
    }

    LinkedList<T>::Node* getEnd()
    {
        return end;
    }


    void add(T object);

    void addFirst(T object);

    void Insert_at_index(T object, size_t position);

    void deleteStart();

    void remove(size_t index);

    void deleteEnd();



    void Update_index_after_inserting(Node *temp);

    void Update_index_after_deleting(Node *temp);


    size_t size() {
        if (start== nullptr)
            return 0;
        return (end->index + 1);
    }

    void clean();

//    void operator=(LinkedList &Y);
    void operator+=(LinkedList &Y);

//    void operator=(Array<T> &Y);

    //Getters
    T get_by_index(int i);

    T operator[](int i);
};

template<class T>
T LinkedList<T>::operator[](int i) {
    return get_by_index(i);
}

template<class T>
void LinkedList<T>::add(T object) {
    Node *newp;
    newp = (Node *) malloc(sizeof(Node));
    newp->obj = object;
    newp->next = nullptr;
    if (start == nullptr) {
        newp->index = 0;
        newp->prev = nullptr;
        start = newp;
        end = newp;

    } else {
        newp->index = end->index + 1;
        newp->prev = end;
        end->next = newp;
        end = newp;
    }
}

template<class T>
void LinkedList<T>::addFirst(T object) {
    Node *newp;
    newp = (Node *) malloc(sizeof(Node));
    newp->index = 0;
    newp->obj = object;
    newp->prev = nullptr;
    if (start == nullptr) {
        newp->next = nullptr;
        start = newp;
        end = newp;
    } else {
        Update_index_after_inserting(start);
        start->prev = newp;
        newp->next = start;
        start = newp;
    }
}

template<class T>
void LinkedList<T>::Insert_at_index(T object, size_t position) {
    Node *newp;

    if (position == 0) {
        addFirst(object);
    } else if (start == nullptr) {
        throw LibraryFunctionException("  Linked List is Not Initiated");

    } else if (position == end->index + 1) {
        add(object);
    } else {
        Node *temp;
        newp = (Node *) malloc(sizeof(Node));
        newp->obj = object;
        temp = start;

        while (temp->index != position - 1 && temp->next != nullptr) {
            temp = temp->next;
        }

        if (temp->index != position - 1) {
            throw LibraryFunctionException(" Position does not Exist for Insert_Between");
        }

        newp->index = position;
        Update_index_after_inserting(temp->next);
        newp->next = temp->next;
        temp->next->prev = newp;
        temp->next = newp;
        newp->prev = temp;
    }
}

//Indexing


template<class T>
void LinkedList<T>::Update_index_after_inserting(LinkedList::Node *temp) {
    while (temp != nullptr) {
        temp->index = temp->index + 1;
        temp = temp->next;
    }
}

template<class T>
void LinkedList<T>::Update_index_after_deleting(LinkedList::Node *temp) {
    while (temp != nullptr) {
        temp->index = temp->index - 1;
        temp = temp->next;
    }
}

template<class T>
T LinkedList<T>::get_by_index(int i)  {
    if (end->index < i || i < 0) {

        throw LibraryFunctionException("Error: Array out of bound");
    }
    Node *temp = start;
    while (temp != nullptr) {
        if (i == temp->index)
            return temp->obj;
        else if (temp->next == nullptr) {
            throw LibraryFunctionException("Error: Index Not Found, Something is gone wrong");

            exit(500);
        }
        temp = temp->next;
    }
}

//Deletes


template<class T>
void LinkedList<T>::deleteStart() {
    if (start == nullptr) {
        throw LibraryFunctionException("Linked List Not Initiated");


    } else {
        Node *newp;
        newp = start;
        start = start->next;
        start->prev = nullptr;
        Update_index_after_deleting(newp);
        free(newp);
    }
}

template<class T>
void LinkedList<T>::remove(size_t index) {
    if (start == nullptr) {
        throw LibraryFunctionException("Linked List Not Initiated");

    } else if (index == 0) {
        deleteStart();
    } else if (index == end->index) {
        deleteEnd();
    } else {
        Node *temp;
        temp = start;
        while (temp->index < index && temp->next != nullptr) {
            temp = temp->next;
        }

        if (temp->index != index) {
            throw LibraryFunctionException("Position does not Exist for remove.");
        }

        if (temp->index == index) {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            Update_index_after_deleting(temp->next);
            free(temp);
        }
    }
}

template<class T>
void LinkedList<T>::deleteEnd() {
    if (start == nullptr) {
        throw LibraryFunctionException("Trying to delete an Node of Empty Linked List");
    } else {
        if (start== NULL||end== NULL||start== nullptr||end== nullptr)
            return;
        Node *temp;
        temp = end;


        if (start==end)
        {
            start = end = nullptr;
        } else
        {
            end = end->prev;;
            end->next = nullptr;
        }
        free(temp);
    }
}

template<class T>
void LinkedList<T>::clean() {
    Node *temp;

    while (start != nullptr) {
        temp = start;
        start = start->next;
        free(temp);
    }

    start = nullptr;
    end = nullptr;
    current = nullptr;

}

template<class T>
void LinkedList<T>::operator+=(LinkedList &Y) {
    if ((start != nullptr) && (Y.start != nullptr)) {
        end->next = Y.start;
        Y.start->prev = end;
        end = Y.end;
    }

    current = nullptr;
}

//template < class T>
//void LinkedList<T>::operator=(LinkedList &Y)
//{
//    clean();
//    while (Y.current != Y.end)
//    {
//        Y.Traverse_Next();
//        add( *(Y.Current_Data) );
//    }
//    Y.current =  nullptr;
//
//}


#endif //NEW_LIBRARY_FUNCTION_CORE_LinkedList_H
