    TRIES

We have seen a few data structures that handle the mapping of key-values pairs.
    Arrays: The key is the element index, the value is the data at that location.
    Hash tables: The key is the hash code of the data, the value is a linked list of data hashing to that hash code.

What about a slightly different kind of data structure where the key is guaranteed to be uniquem and the vaule could be as simple as a Boolean that tells you whether the data existis in the structure?

Lets map key-value pairs where the keys are four-digit years (YYY) and the values are names of universities founded during those years.

In a trie, the paths from a central root node to a leaf node (where the school names would be), would be labeled with digits of the year.

Each node on the path from root to leaf could have 10 pointers emanating from it, one for each digit.

To insert an element into the trie, simply build the correct path from the root to the leaf.

typedef struct_trie
{
    char university[20];
    struct_trie* patchs[10]
} trie;

