
template <class T>
 Array<T>:: Sort()
    {
        validate();
        std::sort(self,self + size);
    }

template <class T>
 Array<T>::Sort_Ascend() { validate(); Sort(); }

template <class T>
 Array<T>::Sort_Descend()
    {
        validate();
        std::sort(self,self + size, greater<T>());
    }