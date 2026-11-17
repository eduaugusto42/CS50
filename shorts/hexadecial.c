HEXADECIMAL

As computer scientists, it is useful to be able to express data the same way the computer does.

The problem, of course, is that trying to parse a huge chain of 0s and 1s can be quite difficult.

The hexadecimal system, aka base-16, is a much more consice way to express the data on a computers system.

0 1 2 3 4 5 6 7 8 9 a b c d e f

Hexadecimal makes this mapping easy because a group of four binary digits (bits) is able has 16 different combinations,
and each of those combinations maps to a single hexadecial digit.

DECIMAL BINARY  HEXADECIMAL
0       0000    0x0
1       0001    0x1
2       0010    0x2
3       0011    0x3
4       0100    0x4
5       0101    0x5
6       0110    0x6
7       0111    0x7
8       1000    0x8
9       1001    0x9
10      1010    0xA
11      1011    0XB
12      1100    0XC
13      1101    0XD
14      1110    0XE
15      1111    0XF

Just like binary has place values (1, 2, 4, 8...) and decimal does too (1, 10, 100, 1000...), so does hexadecimal.

To convert a binary number to hexadecimal, group four binary digits (bits) together from right to left.
    Pad the leftmost group with extra 0 bits at the front if necessary.

Then use the chart a few slides back or your memory to convert those bits to something a bit more concise.


