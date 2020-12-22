

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
//Array<datatype> could be 
//Array<int> or Array<double> ,well we have not planned for char or any other datatype yet,but it works ; 
void main()
{
    Array<int> X(4);
}
```

*OR*

```c++
//Create(s) : Takes size as parameter and Creates the Dynamic Array 
void main()
{
    Array<int> X;
    X.Create(5)
}
```



> ⚠ **Pass size of an array as "unsigned long long int" *strictly***;
>
> eg
>
> ```c++
> void main()
> {
> 	unsigned long long int size = 100;
>     Array<int> X(size);
> }
> ```



> Are this Arrays Dynamic ? 
>
> Ans : Obviously!, They are Dynamic.
>
> eg:
>
> ```c++
> void main()
> {
> 	unsigned long long int size;
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

There are two ways of Accesing the Array:

```c++
void main()
{
    unsigned long long int size = 3;
    Array<int> X(size);
    X[0] = 1;
    X[1] = 2;
    X[2] = 3;
    
    for(int i=0;i<X.size;i++)
        std::cout<<endl<<X[i];
}
```

OR

```c++
void main()
{
    unsigned long long int size = 3;
    Array<int> X(size);
    X.self[0] = 1;
    X.self[1] = 2;
    X.self[2] = 3;
    
    for(int i=0;i<X.size;i++)
        std::cout<<endl<<X.self[i];
}
```



> We know you may be thinking why use X.self[] if we can access it by X[] ?
>
> Ans : **We have overloaded the [] operator so you don't have to always type .self** 
>
> ​			but it creates a problem when you're passing to a external function when it accepts int* or any specific datatype* 
>
> ​			as arguments, because **X is an Object and Not a Array in it self**.
>
> ​			*But we have got a solution :)*
>
> ​			**You can pass X.self and not worry about it.**



#### Printing the Array:

  *Print() : Prints the Array till its size* 

```c++
void main()
{
	unsigned long long int size;
    //Taking Input of the Array;
    std::cout<<"Enter the Size of the Array : ";
    std::cin>>size;
    //Initializing the Array
    Array<int> X(size);
	
    //Assigning some values to the Array;
    for(int i=0;i<X.size;i++)
        X[i]=i;
    
    //Prints the whole array of its size;
    X.Print();
}
/*
Output:

    Enter the Size of the Array : 5

    0 1 2 3 4 

*/
```



#### Sorting Array:

 Sort()  			       : Sorts the Array in default of Ascending Format

 Sort_Ascend()   : Sorts the Array Ascending Format

 Sort_Descend() : Sorts the Array Descending Format

*Default Sorting : Ascending Sort*

```c++
void main()
{
    Array<int> X(10);
    ......
        your code.........
        
	X.Sort(); //Sorts the Array in Ascending Order
}
```

OR

```c++
void main()
{
    Array<int> X(10);
    ......
        your code.........
        
	X.Sort_Ascend(); //Sorts the Array in Ascending Order
}
```

*Descending Order Sort :*

```c++
void main()
{
    Array<int> X(10);
    ......
        your code.........
        
	X.Sort_Descend(); //Sorts the Array in Descending Order
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

*You can Copy Objects of the Class Array with jusr = Assignment  Operator*



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

Merging is more simpler and you don't have to even worry about the size of array too.

And it gets even Magical when you just use += (Assignment Operator) 😉

```
void main()
{
    Array<int> X(10);
    Array<int> Y(15);
    ......
        your code.........
    X+=Y; //That's it Your Array is merged  :<> ;
}
```



The Page is Still Under Construction 🚧👷‍♂️👷‍♀️🏗 but till that time, You can have a look at the Code 🖐.
