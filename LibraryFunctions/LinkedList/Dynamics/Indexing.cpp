//Indexing


template < class T>
void LinkedList<T>::Update_index_after_inserting(LinkedList::Node *temp)
{
    while (temp != nullptr)
    {
        temp->index = temp->index + 1;
        temp = temp->next;
    }
}

template < class T>
void LinkedList<T>::Update_index_after_deleting(LinkedList::Node *temp)
{
    while (temp != nullptr)
    {
        temp->index = temp->index - 1;
        temp = temp->next;
    }
}