LOOPS

while (true)
{

}

This is what we call an infinite loop. The lines of code between the curly braces will execute repeatedly from top to bottom,until and unless we break out of it
(as with a break; statement) or otherwise kill our program.

while (boolean-expr)
{

}
 If the boolean-expr evaluates to true, all the lines of code between the curly braes will execute repeatedly, in order from top-to-bottom, until boolean-expr evaluates to false.

 Somewhat confusingly, the behavior of the scratch block is reversed, but the closest analog.

 do
 {

 }
 while (boolean-expr);
This loop will execute all lines of code between the curly braces once, and then, if the booblean-expr evaluates to true,
will go back and repeat that process until boolean-expr evaluates to false.

for (int i = 0; i < 10; i++)
{

}
Syntactically unattractive, but for loops are used to repeat the body of a loop a specified number of times, in this example 10.
The process undertaken in a for loop is:
    The counter varable(s) (here, i) is set
    The boolean expression is checked.
    If it evaluates to true, the body of the loop executes.
    If it evaluates to false, the body of the loop does not execute.
The counter variable is incremented, and then the boolean expression is checked again, etc.

while
    Use when you want a loop to repeat an unknown number of times, and possibly not at all.

do-while
    Use when you want a loop to repeat an unknown number of times, but at least once.

for
    Use when you want a loop to repeat a discrete number of times, though you may not know the number at the moment the program is compiled.

