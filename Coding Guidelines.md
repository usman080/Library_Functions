# Coding Guidelines

------



## Get Known to the NULL & nullptr :  

As many of the programmers are coming from C, it's important to know the useful features of C++.

The most important thing, I would like to talk is about NULL vs nullptr :

#### So first lets talk about **NULL** :

The [`NULL` macro](http://en.cppreference.com/w/cpp/types/NULL) is an implementation defined constant representing a null pointer, usually the integer `0` in C, the `NULL` macro can have type `void *`. However, in C++ this definition is invalid, as there is no implicit cast from a `void *` type to any other pointer type (which C allows).

Since C++11, `NULL` can be either an integer literal with value zero, or a prvalue (ie: direct value) of type `std::nullptr_t`.

Therefore ambiguity is created and that's why we are going have an look at `nullptr`.

#### Now Talking about **nullptr** :

The [`nullptr`](http://en.cppreference.com/w/cpp/language/nullptr) is a new keyword introduced in C++11. `nullptr` is meant as a replacement to `NULL`. `nullptr` provides a typesafe pointer value representing an empty (null) pointer.

#### `NULL` vs `nullptr` :

Let’s consider the following initialization statements:

```c++
int* x = nullptr;
int* y = NULL;
int* z = 0;
```

Interestingly, this code produces the same results. [Quoting from cppreference](http://en.cppreference.com/w/cpp/language/nullptr):



##  Error solving 'nullptr' was not declared in this scope :



While Compiling you may have got an error like:

```
error: ‘nullptr’ was not declared in this scope
```



Your Compiler should follow ***C++11 ISO*** or ***C++0x(aka C++11)*** Language standard. 

Well this is upon your compiler how to handle it, but you have an option that can follow this Language Standard 

If you're using **g++** you must invoke the flag -std=c++0ax to compile :  

```bash
g++ -std=c++0x *.cpp -o output
```

If you're using **Code::Blocks** :

 Follow the below screenshots: 

![](https://github.com/Sonic-India/Library_Functions/blob/main/Coding%20Guidelines.assets/step-1.png)



![](https://github.com/Sonic-India/Library_Functions/blob/main/Coding%20Guidelines.assets/step-2.png)



![](https://github.com/Sonic-India/Library_Functions/blob/main/Coding%20Guidelines.assets/step-4.png)

------

