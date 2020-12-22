
template <class T>
 Array<T>:: Sort()
    {
        std::sort(self,self + size);
    }

template <class T>
 Array<T>::Sort_Ascend() { Sort(); }

template <class T>
 Array<T>::Sort_Descend()
    {
        std::sort(self,self + size, greater<T>());
    }