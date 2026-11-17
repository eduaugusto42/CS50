CONDITIONALS

Conditionals expressions allow your programs to make decisions and take different forks in the road, depending on the values of variables or user input.

C provides a few different ways to implement conditional expressions (also known as branches) in your programs, some of wich likely look familiar from Scratch.

if (boolean-expression)
{

}

If the called boolean-expression evaluates to true, all lines of code between the curly braces will execute in order from top-to-bottom.

If the boolean-expression evaluates to false, those lines of code will not execute.

if (boolean-expression)
{

}
else
{

}

If the called boolean-expression evaluates to true, all lines of code between the curly braces will execute in order from top-to-bottom.

If the boolean-expression evaluates to false, all lines of code between the second set of curly braces will execute in order from top-to-bottom.

if (boolean-expr1)
{
    // first branch
}
else if (boolean-expr2)
{
    // second branch
}
else if (boolean-expr3)
{
    // third branch
}
else
{
    // fourth branch
}

In C, it is possibel to create an if-else if-else chain.
    In scratch, this required nesting blocks.

As you would expect, each branch is mutually exclusive.


if (boolean-expr1)
{
    // first branch
}
if (boolean-expr2)
{
    // second branch
}
if (boolean-expr3)
{
    // third branch
}
else
{
    // fourth branch
}

It is also possible to create a chain of non-mutually exclusive branches.

In this example, only the third and fourth branches are mutually exclusive. The else binds to the neares if only.

int x = GetInt();
switch(x)
{
    case 1:
        printf("One!\n");
        break;
    case 2:
        printf("Two!\n");
        break;
    case 3:
        printf("Three!\n");
        break;
    default
        printf("Sorry!\n");
}

C switch() statement is a conditional statement that permits enumeration of discrete cases, instead of relying on Boolean expressions.

It is important to break; between each case, or you will "fall through" each case (unless that is desired behavior).

int x = Get_int();
switch(x)
{
    case 5:
        printf("Five, ");
    case 4:
        printf("Four, ");
    case 3:
        printf("Three, ");
    case 2:
        printf("Two, ");
    case 1:
        printf("One, ");
    default:
        printf("Blast-off!\n");
}

