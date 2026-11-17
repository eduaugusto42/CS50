DATA TYPES AND VARIABLES

int
    The int data type is used for variables that will store integers.

    Integers always take up 4 bytes of memory (32 bits). This means the range of values they can store is necessarily limited to 32 bits worth of information.

unsigned int
    unsigned is a qualifier that can be applied to certain types (includinf int), wich effectively doubles the positive range of variables of that type,
    at the cost of disallowing any negative values.

    You will occasionally have use for unsigned variables in CS50.

char
    The char data type is used for variables that will store singe characters.

    Characters always take up 1 byte of memory (8 bits). This means the range of values they can store is necessarily limited to 8 bits worth of information.

    Thanks to ASCII, we have developed a mapping of characters like A, B, C, etc... to numeric values in the positive side of this range.

float
    The float data type is used for variables that will store floating-point alues, also known as real numbers.

    Floaring points values always take up 4 bytes of memory (32 bits).

    It is a little complicated to describe the range of a float, but suffice to say with 32 bits of precision, some of wich might be used for an integer part,
    we are limited in how precise we can be.

double
    The double data type is used for variables that will store floating-point values, also known as real numbers.

    The difference is that doubles are double precision. They always take up 8 bytes of memory (64 bits).

    With an additional 32 bits of precision relative to a float, dobles allow us to specify much more precise real numbers.

void
    Is a type, but not a data type.

    Functions can have a void return type, wich just means they do not return a value.

    The parameter list of a function can aalso be void. It simply means the function takes no parameters.

    For now, this of void more as placeholder for "nothing". It is more complex than that, but this should suffice for the better part of the course.


Those are the five primary types you will encounter in C.

In CS50, we also provide you with two additional types that will probably come in handy:

bool
    The bool data type is used for variales that will store a Boolean value. More precisely, they are capable only of storing one of two values: true and false.

string
    The string data type is used for variables that will store a series of characters, wich programmers typically call a string.

    Strings include things such as words, sentences, paragraphs and the like.

Be sure to #include <cs50.h> atop your programs if you wish to use the bool and string type.


Later in the course we will also encounter structures (structs) and defined types (typedefs) that afford great flexibility in creating data types you need for your programs.

Now, lets discus how to create, manipulate, and otherwise work with variables using these data types:

Creating a variable
    To bring a variable into existence, you need to simply specify the data type of the variable and give it a name.

    int number;
    char letter;

    If you wish to create multiple variables of the same type, you specify the type name once, and then list as many variables of that type you want.

    int height, width;
    float sqrt2, sqrt3, pi;

    In general, it is good practice to only declare variables when you need them.

Using a variable
    After a variable has been declared, it is no longer necessary to specify that variables type (in fact, doing so has some unintended consequenses).

    int number;     // declaration
    number = 17;    // assignment
    char letter;    // declaration
    letter = 'H';   // assignment

    If you are simultaneously declaring and setting the value of a variable (sometimes called initializing), you can consolidade this to one step.

    int number = 17;    // initialization
    char letter = 'H';  // initialization

