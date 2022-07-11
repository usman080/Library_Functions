

![](https://github.com/Sonic-India/Library_Functions/blob/main/LibraryFunctions.assets/Library%20Functions.png)



## Usage:



### How to Use the Library :

1. Download the Code as .zip;

2. Extract the zip contents where your main.c is located.

3. Now, Just include the "LibraryFunctions.h".

   ```c++
   #include"LibraryFunctions.h"
   ```

   

###  Array :



#### Initialization of array :

```c++
//Array<datatype_of_the_array> name_of_the_Array(size_of_an_array);

void main()
{
    Array<int> X(4);
}
```


>
> eg
>
> ```c++
> void main()
> {
> 	unsigned long long int _size = 100;
>     Array<int> X(_size);
> }
> ```



> Are this Arrays Dynamic ? 
>
> Ans : Obviously!, They are Dynamic and are stored on Heap.
>
> eg:
>
> ```c++
> void main()
> {
> 	unsigned long long int _size;
>     std::cout<<"Enter the Size of the Array : ";
>     std::cin>>_size;
>     Array<int> X(_size);
> }
> ```
>
> 





#### Accessing the Array:


```c++
void main()
{
    unsigned long long int _size = 3;
    Array<int> X(_size);
    X[0] = 1;
    X[1] = 2;
    X[2] = 3;
    
    for(int i=0;i<X._size;i++)
        std::cout<<endl<<X[i];
}
```








#### Resizing the Array:

Well Resizing the Array Would Take a chunks of code. 

But Let's Simplify the process

With *Resize(re_size) : Resize function takes re_size as parameter so you can Expand or Compress the Array* 

```c++
void main()
{
    Array<int> X(10);
    ......
        your code.........
        
	X.Resize(5); //Array is Now Resized
    //OR
    ......
        your code.........
    X.Resize(100); //Array is Now Resized
    //Viola ;)
}
```



#### Copying the Array into Another Array:

Well Copying Array is now no more loops,

 Just Imagine assigning the Array using = (Assignment Operator) 

We Know You Smiled 😊;

*You can Copy Objects of the Class Array with just = Assignment  Operator*



```c++
void main()
{
    Array<int> X(10);
    Array<int> Y;
    ......
        your code.........
    Y=X; //That's it :o ;
}
```



#### Merging Two Arrays:

Merging is more simpler and you don't have to even worry about the _size of array too.

And it gets even Magical when you just use += (Assignment Operator) 😉

```c++
void main()
{
    Array<int> X(10);
    Array<int> Y(15);
    ......
        your code.........
    X+=Y; //That's it Your Array is merged  :<> ;
}
```

------



### Linked List :



#### Usage :

```c++
#include "LibraryFunctions.h"

class Test
{
    public:
    int x;
};

int main()
{
    LinkedList<Test> A;
    Array<Test> X(10);  // Array of _size 10

    // Filling the Array from 0 to 10
    for (int i = 0; i < X._size; i++)
    {
        X[i].x = i;
    }

    A = X;  // Copied the Array to LinkedList
    while (A.current != A.end)  
    {
        A.Traverse_Next();  // Traversing Next Node
        if( (*A.Current_Data).x == 5 )
            (*A.Current_Data).x = 100;
        cout<<"\n Data :"<< (*A.Current_Data).x; // Current_Data holds the address of current node.
    }
    
    
    return 1;
}

```





#### Initialization of LinkedList :

```c++
// LinkedList <datatype_of_the_LinkedList> 
void main()
{
    LinkedList<int> X;
}
```



#### Insertion :

Well inserting an elment in linked list require lots of coding and frustrating to manage nodes.

So now  you can do it by just calling  function ....

Insert_start(T object)       :Inserting element at the start of linked list and takes element as parameter.

Insert_end(T object)         :Inserting element at the end of linked list and takes element as parameter.

Insert_at_index(T object,size_t Position) :Inserting element at the specific position in linked list index start from '0' and takes element ,index/position as parameters.

eg:

```cpp
void main()
{
    LinkedList<int> X;
    int i = 20;
    X.Insert_start(10);//Inserting 10 at start/0th index
    X.Insert_end(i);//Inserting value of i at the end of linked list /1th index
    X.Insert_at_index(30,1);//Inserting 30 at 1th index
        .........your code...........
}
```





#### Deletion :

As you know for deleting a element requires chunk of code and So here we make deleting as easy as inserting . so you  can focus  on your work not in the deleting of element.

Here we go......

 Delete_start();                                 :  It is used to delete the starting element by just calling it and also  not require any parameter.

Delete_end();                                    : It is used to delete the last element of your linked list and it  also doesn't require any parameter.

Delete_by_index(size_t Pos);   : It is used to delete the element at specific position and it takes the position as parameter.

eg. :

```cpp
void main()
{
    LinkedList<int> X;
    X.Insert_start(10);//It is inserted at 0th index/start
    X.Insert_end(20); //It is inserted at 1th index/end
    X.Insert_at_index(30,1);  //It is inserted at 1th index and now end = 2
    
    ..........your code............
        
    X.Delete_by_index(1); //30 is deleted
    X.Delete_end(); //20 is deleted
    X.Delete_start(); //10 is deleted 
}
```

#### Traversing :

As we know whenever there is Linked List then its most important part is comes that is Traversing .

We have created very simple and easier traversing for the linked list. you can easily traverse through linked list using following functions...

Traverse_from_start();   :It will set the current pointer to point towards start node.

Traverse_from_end();     : It will set  the current pointer to point towards end node.

Traverse_Next();                 : It will set the current pointer to point towards next node.

Traverse_Prev();                  : It will set the current pointer to point towards previous node.

eg :

```cpp
void main()
{
    LinkedList<int> X ;
    X.Insert_start(10);
    X.Insert_end(20);
    X.Insert_at_index(30,1);
    
}
```





#### Cleaning of Linked List :

Hey you know   you can remove your whole linked list  by just calling clean() function after your work .

clean();   :    Used to clean whole linked list.

```cpp
void main()
{
    LinkedList<int>  X;
    ............your code.......
        .....
        clean();// whole linkedlist is clean 
}
```

 



#### Copying  Linked List into Another Linked List:

Hey  we have some  surprise for you . As you know you can copy array using = operator into
another array. But now you can copy linked list into another linked list same as array by just  using = (Assignment Operator). yeah yeah we know  you are shocked but it's truth .

eg:

```cpp
void main()
{
    LinkedList<int> X , Y;
    
    ...............your code....................
    
    Y = X ;  // Contents of X linked list are copied in Y linked list
}
```





####  Merging Of Two Linked List:

Now merging of two linked list is so easy. you just have to use +=(Assignment Operator)
 with only one line code you can merge two linked list and it will be stored in first linked list .
So here we have example how to use the operator...

```cpp
void main()
{
    LinkedList<int> X , Y ;
    
    ...............your code.........
    
    X += Y;      // It will merge both linked list and store in X
}
```

The Page is Still Under Construction 🚧👷‍♂️👷‍♀️🏗 but till that time, You can have a look at the Code 🖐.