//Misc.cpp includes operators,Cleans

template < class T>
void LinkedList<T>::Clean()
{
    Node * temp;

    while (start != nullptr)
    {
        temp = start;
        start = start->next;
        free(temp);
    }

    start = nullptr;
    end = nullptr;
    current = nullptr;

}

template < class T>
void LinkedList<T>::operator+=(LinkedList &Y)
{
    if ((start != nullptr) && (Y.start != nullptr))
    {
        end->next = Y.start;
        Y.start->prev = end;
        end = Y.end;
    }

    current = nullptr;
}

template < class T>
void LinkedList<T>::operator=(LinkedList &Y)
{
    Clean();
    while (Y.current != Y.end)
    {
        Y.Traverse_Next();
        Insert_end( *(Y.Current_Data) );
    }
    Y.current =  nullptr;
    
}