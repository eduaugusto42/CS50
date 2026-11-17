How do I get to swap the values of ARRAYS

Arrays are a fundamental data structure, and they are extremely useful!

We usa arrays to hold values of the same type at contiguous memory locations.

One way to analogize the notion of array is to think of your local post office, wich usually has a large bank of post office boxes.

In C, the elements of an array are indexed starting from 0.

If an array consist of n elements, the first element is located at index 0. The last element is located at index (n-1).

C is very lenient. It will not prevent you from going "out of bounds" of your array; be careful!

Array declarations

    type name[size];

    The type is what kind of variable each element of the array will be.

    The name is what you want to call your array.

    The size is how many elements you would like your array to contain.

if you think if a single element of an array of type data-type the same as you would any other variable of type data-type (wich, effectively, it is) then all the familiar operations make sense.

    bool truthtable[10];

    truthtable[2] = false;
    if(truthtable[7] == true;)
    {
        printf("TRUE!\n");
    }
truthtable[10] = true;

When declaring and initializing an array simultaneously, there is a special syntax that may be used to fill up the array with its starting values.

// instantiation syntax
bool truthtable[3] = {false, true, true};

// individual element syntax
bool truthtable[3];
truthtable[0] = false;
truthtable[1] = true;
truthtable[2] = true;

Arrays can consist of more than a single dimension. You can have as many size specifiers as you wish.

    bool battleship[10][10];

you can chose to think of this as either a 10x10 grid of cells.
    In memory though, it is really just a 100-element one-dimensional array.

    Multi-dimensional arrays are great abstractions to help visualize game boards or other complex representations.

While we can treat individual elements of arrays as variables, we cannot treat entire arrays themselves as variables.

We cannot, for instance, assign one array to another using the assignment operator. That is not legal C.

Instead, we must use a loop to copy over the elements one at a time.

int foo[5] = {1, 2, 3, 4, 5}
int bar[5];

for(int j = 0; j < 5; j++)
{
    bar[j] = foo[j];
}

Recall that most variables in C are passed by value in function calls.

Arrays do not follow this rule. Rather, they are passed by reference. The callee receives the actual array, not a copy of it.
    What does that mean when the callee manipulates elements of the array?

For now we will gloss over why arrays have this special property, but we will return to it soon enough!

void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4] = {0, 1, 2, 3};
    set_int(a);
    set_array(b);
    printf("%d %d\n", a, b[0]);
}

void set_array(int array[4])
{
    array[0] = 22;
}

void set_int(int x)
{
    x = 22;
}

