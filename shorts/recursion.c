RECURSION

We might describe an implementation of an algorithm as being particularly "elegant" if it solves a problem in a way that is both interessting and easy to visualize.

The technique of recursion is very common way to implement such an "elegant" to visualize.

The technique of recursion is a very common way to implement such an "elegant" solution.

The definition of a recursive function is one that, as part of its execution, invokes itself.

The factorial function(n!) is defined over all positive integers.

n! equals all of the positive integers less than or equal to n, multiplied together.

Thinking in terms of programming, we will define the mathematical function n! as fact(n).

fact(1) = 1
fact(2) = 2 * 1
fact(3) = 3 * 2 * 1
fact(4) = 4 * 3 * 2 * 1
fact(5) = 5 * 4 * 3 * 2 * 1
...

fact(n) = n * fact(n-1)

This forms the basis for a recursive definiiton of the factorial function.

Every recursive function has two cases that could apply, given any input.
    The base case, wich when triggered will terminate the recursive process.

    The recursive case, wich is where the recursion will actually occur.

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    // recursive case
}

In general, but not always, recursive functions replace loops in non-recursive functions.

It is also possivel to have more than one base or recursive case, if the program might recursive or terminate in different ways, depending on the input being passed in.

Multiple base cases: The Fibonacci number sequence is defined as follows:
    The first element is 0.
    The second elemnt is 1.
    The "N" element is the sum of (n-1) and (n-2) elements.

Multiple recursive cases: The Collatz conjecture.

The Collatz conjecture applies to positive integers and speculates that it is always possibel to get "back to 1" if you follow these steps:
    If n is 1, stop.
    Otherwise, if n is even, repeat this process on n/2.
    Otherwise, if n is odd, repeat this process on 3n+1.

Write a recursive function collatz(n) that calculates how many steps it takes to get to 1 if you start from n and recurse as indicated above.

int collatz(int n)
{
    // case case
    if (n == 1)
    return 0;
    // even numbers
    else if ((n % 2) == 0)
    return 1 + collatz(n/2);
    // odd numbers
    else
        return 1 + collatz(3 * n + 1);
}
