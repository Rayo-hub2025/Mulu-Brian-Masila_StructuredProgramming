**Normal variable** -stores an actual value and memory is accessed directly using the variable name.br
int x = 10;
printf("%d",x);
**Pointer** stores memory address of another variable and memory is addressed indirectly through address stored in the pointer.
int x = 10;
int *p=&x;
printf("%d",*p);
**Variable declaration and definition** -declares and defines an integer and memory is allocated.
**Pointer declaration and definition** - declares a pointer that can store address of an integer.
**Dereferencing a pointer** accessing or modifying the value stored at the memory address held by the pointer.
int x = 10;
int *p = &x;

printf("%d", *p);
**Modifying a value**
int x = 10;
int *p = &x;

*p = 50;
printf("%d", x);
**Cases Where Pointers Are Preferred Over Normal Variables**
Passing large data to functions efficiently
Dynamic memory allocation
Modifying actual variables inside functions
**Risks of Using Pointers Compared to Variables**
Harder to read and maintain
Security risks-Buffer overflows and illegal memory access
Memory leaks-Failure to free allocated memory
**Scenarios when Call by Value Is Preferred**
When original data must not change
When working with small data types
For security and reliability
**Scenarios when Call by Reference Is Preferred**
When function must modify actual data
When passing arrays, structures, or large data
When returning multiple values from a function
