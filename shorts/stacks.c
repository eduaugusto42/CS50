    STACKS (DATA STRUCTURE)

A stack is a special type of structure that can be used to maintain data in an organized way.

This data structure is commonly implemented in one of two ways: as an array or as a linked list.

In either case, the important rule is that when data is added to the stack, it sits "on top", and so if an element needs to be removed,
the moste recently added element is thenly elemet that can legally be removed.
    Last in first out (LIFO).

Array-based implementation:

    typedef struct_stack
    {
        value array[CAPACITY];
        int top;
    } stack;

    stack s;

There are only two operations that may legally be performed on a stack.

    PUSH: Add new element to the top of the stack.

        In the general case, push() needs to:
        - Accept a pointer to the stack.
        - Accept data of type VALUE to be added to the stack.
        - Add that data to the stack at the top of the stack.
        - Change the location of the top of the stack.

        stack s;
        s.top = 0;
        push(&s, 28);

    POP: Remove the mest recently-added element from the top of the stack.

        In the general case, pop() needs to:
        - Accept a pointer to the stack.
        - Change the location of the top of the stack.
        - Return the value that was removed from the stack.

Just make sure to always maintain a pointer to the head of the linked list!

To push, dynamically allocate a new node, set its next pointer to point to the current head of the list, then move the head pointer to the newly-created node.

To pop, traverse the linked list to its second element (if it exists), free the head of the list, then move the head pointer to the (former) second element.

