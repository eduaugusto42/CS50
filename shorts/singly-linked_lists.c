SINGLY-LINKED LISTS

So far in the course, we have only had one kind of data structure for representing collections of like values.
    Structs, recall, give us "containers" for holding variables of different data types, typically.

Arrays are great for element lookup, but unless we want to insert at the very end of the array, inserting elements is quite costly - remember insertion sort?

Arrays also suffer from a great inflexibility - what happens if we need a larger array than we thought?

Through clever use of pointers, dynamic memory allocation, and structs,
we can put the pieces together to develop a new kind of data structure that give us the ability to grow and skring a collection of like values to fit our needs.

We call this combination of elements, when used in this way, a linked list.

A linked list node is a special kinf of struct with two members:
    Data of some data type(int, char, float...)
    A pointer to another node of the same type

In this way, a set of nodes together can be thought of as forming a chain of elements that we can follow from beginning to end.

typedef struct sllist
{
    VALUE val;
    struct sllist* next;
} sllnode;

In order to work with linked lists effectively, there are a number of operations that we need to understand:

    1. Create a linked list when it does not already exist.

        sllnode* create (VALUE val);

    Steps involved:
        a. Dynamically allocate space for a new sllnode.
        b. Cehck to make sure we did not run out of memory.
        c. Initialize the nodes val field.
        d. Initialize the nodes next field.
        e. Return a pointer to the newly created sllnode.

    2. Search through a linked list to find an element.

        bool fin (sllndoe* head, VALUE val);

    Stops involved:
        a. Create a traversal pointer pointing to the lists head.
        b. If the current nodes val field is what we are looking for, report sucssess.
        c. If not, set the traversal pointer to the next pointer in the list and go back to step b.
        d. If you have reached the end of the list, report failure.

    3. Insert a new node into the linked list.

        sllnode* insert(sllnode* head, VALUE val);

    Steps involved:
        a. Dynamically allocate space for a new sllnode.
        b. Check to make sure we did not run out of memory.
        c. Populate and insert the node at the beginning of the linked list.
        d. Return a pointer to the new head of the linked list.

    4. Delete a single element from a linked list. // This is only possivel in doubly linked lists.
    5. Delete an entire linked list.

        void destroy(sllnode* head);

    Steps involved:
        a. If you have reached a null pointer, stop.
        b. Delete the rest of the list.
        c. Free the current node.


