DYNAMIC MEMORY ALLOCATION

We can user pointers to ger access to a block od dynamically-allocated memory at runtime.

Dynamically allocated memory comes from a pool of memory known as the heap.

Prior to this point, all memory we have been working with has been coming from a pool of memory known as the stack.

We get this dynamically-allocated memory by making a call to the C standart library function malloc(), passing as its parameter the number of bytes requested.

After obtaining memory for you(if it can), malloc() will return a pointer to that memory.

What if malloc() can not give you memory? It will hand you back NULL.


// statically obtain an integer
int x;

// dynamically obtain an integer
int *px = malloc(sizeof(int));


// get an integer from the user
int x = GetInt();

// array of floats on the stack
float stack_array[x];

// array of floats on the heap
float* heap_array = malloc(x * sizeof(float));

Here is the trouble: Dynamically-allocated memory is not automatically returned to the system fo later use when the function in wich it is created finishes execution.

Failing to return memory back to the system when you are finished with it results in a memory leak wich can compromise your systems performance.

When you finish working with dynamically-allocated memory, you must free() it.

char* word = malloc(50 * sizeof(char));

// do stuff with word

// now we're done working with that block
free(word);

Three golden rules:
    1. Every block of memory that you malloc() must subsequently be free()d.
    2. Only memory that you malloc() should be free()d.
    3. Do not free() a block of memory more than once.


