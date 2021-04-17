//Inserts

template <class T>
void LinkedList<T>::Insert_end(T object)
{
    Node * newp;
    newp = (Node*) malloc(sizeof(Node));
    newp->obj = object;
    newp->next = nullptr;
    if (start == nullptr)
    {
        newp->index = 0;
        newp->prev = nullptr;
        start = newp;
        end = newp;

    }
    else
    {
        newp->index = end->index + 1;
        newp->prev = end;
        end->next = newp;
        end = newp;
    }
    current = nullptr;
}

template <class T>
void LinkedList<T>::Insert_start(T object)
{
    Node * newp;
    newp = (Node*) malloc(sizeof(Node));
    newp->index = 0;
    newp->obj = object;
    newp->prev = nullptr;
    if (start == nullptr)
    {
        newp->next = nullptr;
        start = newp;
        end = newp;
    }
    else
    {
        Update_index_after_inserting(start);
        start->prev = newp;
        newp->next = start;
        start = newp;
    }
}

template < class T>
void LinkedList<T>::Insert_at_index(T object, size_t position)
{
    Node * newp;

    if (position == 0)
    {
        Insert_start(object);
    }
    else if (start == nullptr)
    {
        std::cout << "\n Linked List is Not Initiated \n";
        exit(501);
    }
    else if (position == end->index + 1)
    {
        Insert_end(object);
    }
    else
    {
        Node * temp;
        newp = (Node*) malloc(sizeof(Node));
        newp->obj = object;
        temp = start;

        while (temp->index != position - 1 && temp->next != nullptr)
        {
            temp = temp->next;
        }

        if (temp->index != position - 1)
        {
            std::cout << "\n Position does not Exist for Insert_Between \n";
            exit(502);
        }

        newp->index = position;
        Update_index_after_inserting(temp->next);
        newp->next = temp->next;
        temp->next->prev = newp;
        temp->next = newp;
        newp->prev = temp;
    }
}


