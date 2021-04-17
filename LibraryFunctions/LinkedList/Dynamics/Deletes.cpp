//Deletes


template < class T>
void LinkedList<T>::Delete_start()
{
    if (start == nullptr)
    {
        std::cout << "\n Linked List Not Initiated \n";
        exit(501);

    }
    else
    {
        Node * newp;
        newp = start;
        start = start->next;
        start->prev = nullptr;
        Update_index_after_deleting(newp);
        free(newp);
    }
}

template < class T>
void LinkedList<T>::Delete_by_index(size_t Pos)
{
    if (start == nullptr)
    {
        std::cout << "\n Linked List Not Initiated \n";
        exit(501);

    }
    else if (Pos == 0)
    {
        Delete_start();
    }
    else if (Pos == end->index)
    {
        Delete_end();
    }
    else
    {
        Node * temp;
        temp = start;
        while (temp->index < Pos && temp->next != nullptr)
        {
            temp = temp->next;
        }

        if (temp->index != Pos)
        {
            std::cout << "\n Position does not Exist for Delete_by_index \n";
            exit(502);
        }

        if (temp->index == Pos)
        {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            Update_index_after_deleting(temp->next);
            free(temp);
        }
    }
}

template < class T>
void LinkedList<T>::Delete_end()
{
    if (start == nullptr)
    {
        std::cout << "\n Linked List Not Initiated \n";
        exit(501);

    }
    else
    {
        Node * temp;
        temp = end;
        end = end->prev;
        end->next = nullptr;
        free(temp);
        current = nullptr;
    }
}
