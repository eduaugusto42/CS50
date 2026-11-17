DOUBLY-LINKED LIST

Singly-linked lists really extend our ability to collect and organize data, but they suffer from a crucial limitation.
    We can only ever mover in one direction through the list.

Consider the implication that would have for trying to delete a node.

A doubly-linked list, by constrast, allow us to move forward and backward though the list, all by simply adding one extra pointer to our struct definition.

typedef struct dllist
{
    VALUE val;
    struct dllist* prev;
    struct dllist* next;
} dllnode;

In order to work with linked lists effectively, there are a number of operations that we need to understand:

1. Create a linked list when it does not already exist.
2. Search through a linked list to find an element.
3. Insert a new node into the linked list.
4. Delete a single element from a linked list.
5. Delete an entire linked list.

Delete a node from a linked list.

    void delete (dllnode* target);

Steps involved:
a. Fix pointers of ther surrouding nodes to "skip over" target.
b. Free target.

Insert a new node into the linked list.

    dllnode* insert(dllnode* head, VALUE, val);

Linked lists, of both the singly- and doubly-linked varieties, support extremely efficient insertion and deletion of elements.
        In fact, these operations can be done in constant time.

What is the downside? Remember how we had to find an element? We have lost the ability to randomly-access list element.
    Accessing a desired element may now take linear time.

