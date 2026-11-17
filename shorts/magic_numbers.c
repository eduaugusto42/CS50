MAGIC NUMBERS

Some of the programs we have written in CS50 have some weird numbers thrown in there.
    The height of Marios pyramid is capped at 23, for example.

What do those numbers mean? If someone looks at your program, is the meaning of 23 immediately obvious?

Directly writting constants into our code is sometimes referred to as using magic numbers.

card deal_cards(deck name)
{
    for (int i = 0; i < 52; i++)
    {
        // deal the card
    }
}

We have got a magic number in here, Do you see what it is?
    More importantly, do you see the potential problem here? Particularly if this function is just one of many in a suite of programs that manipulate decks of cards.

card deal_cards(deck name)
{
    int deck_size = 52;
    for (int i = 0; i < deck_size; i++)
    {
        // deal the card
    }
}

This fixes one problem, but introduces another.
    Even if globally declared, what if some other function in our suite inadvertently manipulates deck_size. Could spell trouble.

C provides a preprocessor directive (also called a macro) for creating symbolic constants.

#define NAME REPLACEMENT

At the time your program is compiled, #define goes through your code and replaces NAME with REPLACEMENT.
    If #include is similar to copy/paste, then #define is analogous to find/replace.

#define DECKSIZE 52

card deal_cards(deck name)
{
    for (int i = 0; i < DECKSIZE; i++)
    {
        // deal the card
    }
}

