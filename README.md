

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



> Are this Arrays Dynamic ? 
>
> Ans : Obviously!, They are Dynamic.
>
> eg:
>
> ```c++
> void main()
> {
>  int size;
>     std::cout<<"Enter the Size of the Array : ";
>     std::cin>>size;
>     Array<int> X(size);
> }
> ```
>
> 



> Sorry, but you can't initialize a array using brace-enclosed  initializer list.
>
> eg:  X = {1,2,3,4};



#### Accessing the Array:

> As we know accessing of array is quite simple using [] operator. So we overloaded this operator for you now you can use this operator for accessing the array elements.
>
> ```c++
> void main()
> {
>     int size = 3;
>     Array<int> X(size);
>     X[0] = 1;
>     X[1] = 2;
>     X[2] = 3;
>     
>     for(int i=0;i<X.size;i++)
>         std::cout<<endl<<X[i];
> }
> ```
>



#### Resizing the Array:

> Well Resizing the Array Would Take a chunks of code. 
>
> But Let's Simplify the process
>
> With resize(re_size) : Resize function takes re_size as parameter so you can Expand or Compress the Array* 
>
> ```c++
> void main()
> {
>     Array<int> X(10);
>     ......
>         your code.........
>         
> 	X.resize(5); //Array is Now Resized
>     //OR
>     ......
>         your code.........
>     X.resize(100); //Array is Now Resized
>     //Viola ;)
> }
> ```
>



#### Merging Two Arrays:

> Merging is more simpler and you don't have to even worry about the size of array too.
>
> And it gets even Magical when you just use += (Assignment Operator) 😉
>
> ```c++
> void main()
> {
>     Array<int> X(10);
>     Array<int> Y(15);
>     ......
>         your code.........
>     X+=Y; //That's it Your Array is merged  :<> ;
> }
> ```
>



#### Cleaning of array :

> Hey do you know you can remove your whole array by just using array_name.clean(). 

> ```c++
> void main()
> {
>     int size = 3;
>     Array<int> X(size);
>     X[0] = 1;
>     X[1] = 2;
>     X[2] = 3;
>     X.clean();
>     for(int i=0;i<X.size;i++)
>         std::cout<<endl<<X[i];  // Show exception 
> }
> ```



#### Removing array element:

> For removal of element you don't have to think that much simply use X.remove_at_index(index).

> ```c++
> void main()
> {
>     int size = 3;
>     Array<int> X(size);
>     X[0] = 1;
>     X[1] = 2;
>     X[2] = 3;
>     X.remove_at_index(1);
>     for(int i=0;i<X.size;i++)
>         std::cout<<endl<<X[i]; 
> }
> ```

------



### Linked List :



#### Initialization of LinkedList :

> ```c++
> // LinkedList <datatype_of_the_LinkedList> 
> void main()
> {
>     LinkedList<int> X;
> }
> ```
>



#### Insertion :

> Well inserting an elment in linked list require lots of coding and frustrating to manage nodes.
>
> So now  you can do it by just calling  function ....
>
> addFirst(T object)       :Inserting element at the start of linked list and takes element as parameter.
>
> add(T object)               :Inserting element at the end of linked list and takes element as parameter.
>
> Insert_at_index(T object,size_t Position) :Inserting element at the specific position in linked list index start from '0' and takes element ,index/position as parameters.
>
> eg:
>
> ```c++
> void main()
> {
>     LinkedList<int> X;
>     int i = 20;
>     X.addFirst(10);//Inserting 10 at start/0th index
>     X.add(i);//Inserting value of i at the end of linked list /1th index
>     X.Insert_at_index(30,1);//Inserting 30 at 1th index
>         .........your code...........
> }
> ```
>



#### Deletion :

> As you know for deleting a element requires chunk of code and So here we make deleting as easy as inserting . so you  can focus  on your work not in the deleting of element.
>
> Here we go......
>
> deleteStart();                                 :  It is used to delete the starting element by just calling it and also  not require any parameter.
>
> deleteEnd();                                    : It is used to delete the last element of your linked list and it  also doesn't require any parameter.
>
> remove(size_t index);   : It is used to delete the element at specific position and it takes the position as parameter.
>
> eg. :
>
> ```cpp
> void main()
> {
>     LinkedList<int> X;
>     X.addFirst(10);//It is inserted at 0th index/start
>     X.add(20); //It is inserted at 1th index/end
>     X.Insert_at_index(30,1);  //It is inserted at 1th index and now end = 2
>     
>     ..........your code............
>         
>     X.remove(1); //30 is deleted
>     X.deleteEnd(); //20 is deleted
>     X.deleteStart(); //10 is deleted 
> }
> ```
>



#### Cleaning of Linked List :

> Hey do you know you can remove your whole linked list  by just calling clean() function after your work .
>
> clean();   :    Used to clean whole linked list.
>
> ```cpp
> void main()
> {
>     LinkedList<int>  X;
>     ............your code.......
>         .....
>         X.clean();// whole linkedlist is clean 
> }
> ```
>

 

####  Merging Of Two Linked List:

> Now merging of two linked list is so easy. you just have to use +=(Assignment Operator)
>  with only one line code you can merge two linked list and it will be stored in first linked list .
> So here we have example how to use the operator...
>
> ```cpp
> void main()
> {
>     LinkedList<int> X , Y ;
>     
>     ...............your code.........
>     
>     X += Y;      // It will merge both linked list and store in X
> }
> ```
>



#### Accessing Linked List:

> As you know accessing the data from linked list is quite complex and we have to write chunk of code. But now you can access linked list just like array. So from now onwords don't think just use [] operator. 
>
> ```c++
> void main(){
> LinkedList<int> x;
> x.add(10);
> x.addFirst(20);
> x.add(30);
> cout<<"\n"<<x[0]<<x[1]<<endl;
> }
> ```

------



####  Stack :

##### Initialization of Stack:

> ```c++
> void main(){
>     Stack<int> S;
> }
> ```



##### Push elements in Stack:

> Now you don't have to write bunch of code. Simply use push(data) function.

> ```c++
> void main(){
>     Stack<int> S;
>     S.push(10);
>     S.push(20);
> }
> ```



##### Get Top of Stack:

> Use S.top() it returns element at top of the stack.

> ```c++
> void main(){
>     Stack<int> S;
>     S.push(10);
>     S.push(20);
>     cout<<S.top()<<endl;
> }
> ```



##### Pop elements from Stack:

> For Poping use stack_name.pop() function.

> ```c++
> void main(){
>     Stack<int> S;
>     S.push(10);
>     S.push(20);
>     S.pop();
>     S.pop();
> }
> ```

------



#### Binary Search Tree(BST):



#### Initialization of BST:

> As we know to create BST we have to write bunch of complex code .But by using Library Functions you can create BST in simple way.
>
> ```C++
> bool cmp(int &a,int &b)
> {
>     if (a>b)
>         return true;
>     return false;
> }
> void main(){
>     BST<int> BT(cmp); //Pass cmp function as parameter
> }
> ```



#### Insertion in BST:

> Using Library Function you insert in BST by calling one function BT.insert(data).
>
> ```c++
> bool cmp(int &a,int &b)
> {
>     if (a>b)
>         return true;
>     return false;
> }
> void main(){
>     BST<int> BT(cmp); //Pass cmp function as parameter
>     BT.insert(1);
>     BT.insert(2);
> }
> ```



#### Iterating over BST :

> As we know iteration is quite complex task while working with BST. But now you don't have to worry you can iterate easily using LIbrary Functions.
>
> ```c++
> bool cmp(int &a,int &b)
> {
>     if (a>b)
>         return true;
>     return false;
> }
> void main(){
>     BST<int> BT(cmp); //Pass cmp function as parameter
>     BT.insert(1);
>     BT.insert(2);
>     auto iter = a.getIterator();
>     while (iter.hasNext())
>     {
>         int data = iter.next();
>         cout<<" "<<data;
>     }
> }
> ```

The BST is Still Under Construction 🚧👷‍♂️👷‍♀️🏗 but till that time, You can have other data structure 🖐.