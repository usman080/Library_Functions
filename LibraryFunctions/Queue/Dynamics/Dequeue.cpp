// Dequeue - removes an element from the front of the queue

    template<class T>
    
    void Queue<T>::Dequeue(T object)
    {   
        if( is__empty() != 0 )
            return;
        self.Delete_start();
        self.Current_Data = &self.start->obj;
        Current_Data = &(*self.Current_Data);
    }