
template<class T>
T LinkedList<T>::get_by_index(int i) {
    if (end->index <i || i<0)
    {
        std::cout<<" \n Out of Bound Approach Initiated \n ";
        exit(500);
    }
    Node* temp = start;
    while (temp != nullptr)
    {
        if(i == temp->index)
            return temp->obj;
        else if(temp->next == nullptr)
        {
            std::cout<<" \n Index Not Found, Something is gone wrong \n ";
            exit(500);
        }
        temp = temp->next;
    }
}
