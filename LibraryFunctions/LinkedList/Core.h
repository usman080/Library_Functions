#pragma once

template < class T>
class LinkedList
{
public:
    friend class Node;
   class Node
    {
    public:
        size_t index;
        T obj;	//Data Field
        Node * next;
        Node * prev;
    };

    T * Current_Data;	// Current Object/Data
    Node *start = nullptr;	// Starting location of Linked List
    Node *end = nullptr;	// Ending location of Linked List
    Node *current = nullptr;	// Current location of Linked List


    void Insert_end(T object);
    void Insert_start(T object);
    void Insert_at_index(T object, size_t position);

    void Delete_start();
    void Delete_by_index(size_t Pos);
    void Delete_end();

    void Traverse_from_start();
    void Traverse_from_end();

    void Traverse_Next();
    void Traverse_Prev();

    void Update_index_after_inserting(Node *temp);
    void Update_index_after_deleting(Node *temp);

    void Clean();
    void operator=(LinkedList &Y);
    void operator+=(LinkedList &Y);

    void operator=(Array<T> &Y);

};
