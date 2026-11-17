    HASH TABLES

Hash tables combine the random access ability of an array with the dynamism of a linked list.

This means (assuming we define our hash table well):
    - Insertion can start to tend toward O(1)
    - Deletion can start to tend toward O(1)
    - Lookup can start to tend toward O(1)

We are gaining the advantages of both types of data structure, while mitigating the disavantages.

To get this performance upgrade, we create a new structure whereby when we insert data into the structure,
the data itself give us a clue about where we will find the data, should we need to later look it up.

The trade off is that hash tables are not great at ordering or sorting data, but if we don not care about that, then we are good to go!

A hash table amounts to a combination of two things with wich we are quite familiar.

    First, a hash function, wich returns an nonnegative integer value called a hash code.
    Second, an array capable of sorting data of the type we wish to place into the data structure.

The idea is that we run our data through the hash function, and then store the data in the element of the array represented by the returned hash code.

How to define a hash function? Really no limit to the number of possible hash functions.

A good hash function should:
    - Use only the data being hashed
    - Use all of the data being hashed
    - Be deterministic
    - Uniformly distribute data
    - Generate very different hash codes for very similar data

unsigned int hash(char* str)
{
  int sum = 0;
  for (int j = 0; str[j] != "\0"; j++)
  {
    sum +=str[j];
  }
  return sum % HASH_MAX;
}


A collision occurs when two pieces of data, when run through the hash function, yeld the same hash code.

Presumably we want to store both pieces of data in the hash table, so we should'nt simply overwrite the data taht happened to be placed in there first.

We need to find a way to get both elements into the hash table while trying to preserve quick insertion and lookup.

Resolving collisions: Linear probing

    In this method, if we have a collision, we try to place the data in the next consecutive element in the array
    (wrapping around to the beginning if necessary) until we find a vacancy.

    That way, if we do not find what we are looking for in the first location, at least hopefully the element is somewhere nearby.

    Linear probing is subject to a problem called clustering. Once there is a miss, two adjacent cells will contain data,
    making it more likely in the future that the cluster will grow.

    Even if we switch to another probing technique, we are still limited. We can only store as much data as we have locations in our array.

Resolving collisions: Chaining:

    We have eliminated clustering

    We know from experience with linked lists that insertion (and creation, if necessary) inbto a linked list is an O(1) operation.

    Dor lookup, we only need to search through what is hopefully a small list, since we are distributing what would otherwise be on huge list across n lists.

