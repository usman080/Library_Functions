// Misc 

// is__empty() - checks for empty Queue
// Clean() - Deletes the entire Queue

    template<class T>
    bool Queue<T>::is__empty()
    {
        if(self.start != nullptr)
            return 0;
        else
        {
            std::cout<<"\n Queue is Empty. \n";
            return 1;
        }
    }

    template<class T>
    void Queue<T>::Clean()
    {
        if((is__empty()) == 0 )
           self.Clean();
    }