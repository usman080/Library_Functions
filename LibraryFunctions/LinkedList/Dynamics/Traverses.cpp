//Traverses


template < class T>
void LinkedList<T>::Traverse_from_start()
{
    if (start != nullptr)
    {
        current = start;
    }
}

template < class T>
void LinkedList<T>::Traverse_from_end()
{
    if (start != nullptr)
    {
        current = end;
    }
}


template < class T>
void LinkedList<T>::Traverse_Next()
{
    if (start != nullptr)
    {
        if (current == nullptr)
        {
            current = start;
        }
        else
        {
            if (current == end)
            {
                std::cout << "\n Linked List has reached the End. \n";
                exit(500);
            }
            else
            {
                current = current->next;
            }
        }

        Current_Data = &current->obj;
    }
}

template < class T>
void LinkedList<T>::Traverse_Prev()
{
    if (start != nullptr)
    {
        if (current == nullptr)
        {
            current = start;
        }
        else
        {
            if (current == start)
            {
                std::cout << "\n Linked List has reached the Start. \n";
                exit(500);
            }
            else
            {
                current = current->prev;
            }
        }
    }

    Current_Data = &current->obj;
}
