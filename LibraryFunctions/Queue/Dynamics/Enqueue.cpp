// Enqueue - adds a new element at the rear of the queue  

    template<class T>
    
    void Enqueue(T object)
    {
        if(self.start != nullptr)
            self.Insert_end(object);
        else
        {
            self.Insert_end(object);
            self.Current_Data = &self.start->obj;
            Current_Data = &(*self.Current_Data);
        }
    }