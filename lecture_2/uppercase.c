#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // In <ctype.h>, there's a function for that: toupper(s[i])
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Change s[i] to uppercase
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
            // Just print s[i]
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

