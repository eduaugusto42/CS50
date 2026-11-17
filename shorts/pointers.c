POINTERS

Pointers provide an alternative way to passa data between functions.
    Recall that up to this point, we have passed all data by value, with one exception.
    When we pass data by value, we only passa a copy of that data.

If we use pointers instead, we have the power to pass the actual variable itself.
    That means that a change that is made in one function can impact what happens in a different function.
    Previously, this wasnt possible!

Before we dive into what pointers are and how to work with them, it is worth going back to basics and have a look at our computers memory.

Every file on your computer lives on your disk drive, be it a hard disk (HDD) or solid-state drive (SSD).

Disk drives are just storage space; we can not directly work there. Manipulation and use of data can only take place in RAM, so we have to move data there.

Memory is basically a huge array of 8-bit wide bytes.
    512MB, 1GB, 2GB, 4GB...

Data Type:     Size (in bytes)
    int             4
    char            1
    float           4
    double          8
    long long       8
    string          ??

Back to this idea of memory as a bit array of byte-sized cells.

Recal from our discussion of arrays that they not only are useful for storage of information but also for so-called random access.
    We can access individual elements of the array by indicating wich index location we want.

Similarly, each location in memory has an address.

There is only one critical thing to remember as we start working with pointers:

    "POINTERS ARE JUST ADDRESSES!"

As we start to work with pointrs, just keep this image in mind:

int k; // Is a box to store integers.
k = 5; // The number 5 is stored in the box "k".
int* pk; // Is a box related to integers.
pk = &k; // The adress of "k" is stored in "pk" but when you fprint "pk", you'll see the number that is stored in "k".

A pointer, then is a data item whose
    value is a memory address
    type describe the data located at that memory address

As such, pointers allow data structures and/or variables to be shared among functions.

Pointers make a computer enviroment more like the real world.

The simplest pointer available to us in C is the NULL pointer.
    As you might expect, this pointer points to nothing (a fact wich can actually come in handy!)

When you create a pointer and you dont set its value immediately, you should always set the value of the pointer to NULL.

You can check wheter a pointer is Null using the equality operator (==).

Another easy way to create a pointer is to simply extract the address of an already ecisting variable. We can do this with the address extraction operator (&).

If x is an int-type variable, then &x is a pointer-to-int whose value is the address of x.

If arr is a array of doubles, then &arr[i] is a pointer-to-double who value is the address of the "i th" element of arr.
    An arrays name, then, is actually just a pointer to its first element - you have been workinh with pointers all along!

The main purpose of a pointer is to allow us to modify or inspect the location to wich it points.
    We do this by dereferencing the pointer.

If we have a pointer-to-char called pc, then *pc is the data that lives at the memory address stored inside the variable pc.

Used in this context, * is known as the dereference operator.

It "goes to the reference" and accesses the data at that memory location, allowing you to manipulate it at will.

This is just like visiting your neighbor. Having their address is not enough. You need to go to the adress and only then can you interact with them.

Can you guess what might happen if we try to dereference a pointer whose calue is NULL?

    Segmentation fault

Surprisingly, this is actually a good behavior! It defends against accidental dangerous manipulation of unknown pointers.
    That is why we recommend you set your pointers to NULL immediately if you arent setting them to a known, desired value.

int* p;

The value of p is an address.
We can derefenrece p with the * operator.
If we do, what we will find at that location is an int.

One more annoying thing with those *s. They are an important parto of both the type name and the variable name.
    Best illustrated with an example.

    int* px, py, pz;    // That will get you a pointer called px and two integers called py and pz.
    int* pa, *pb, *pc;  // This gets you the intended sintax.

    Data Type:     Size (in bytes)
    int             4
    char            1
    float           4
    double          8
    long long       8
    char*           4 or 8

