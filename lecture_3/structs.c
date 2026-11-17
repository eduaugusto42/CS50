#include <cs50.h>
#include <stdio.h>

// Define canditate struct
typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    // Define number of candidates
    const int N = 3;
    candidate candidates[N];
    int winner = 0;

    // Populate the array with user's input
    for (int i = 0; i < N; i++)
    {
        candidates[i].name = get_string("Name: ");
        candidates[i].votes = get_int("Votes: ");
        if (candidates[i].votes > winner)
        {
            winner = candidates[i].votes;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (candidates[i].votes == winner)
        {
            printf("The winner is %s with %i votes\n", candidates[i].name, candidates[i].votes);
        }
    }

}

