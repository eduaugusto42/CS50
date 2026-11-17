    QUEUES
A queue is a special type of structure that can be used to maintain data in an organized way.

This data structure is commonly implemented in one of two ways: as ab array or as a linked list.

In eiter case, the important rule is that when data is added to the queue, it is tacked onto the end, and so if an element needs to be removed,
the element at the front is the only element that can legally be removed.
    First in, first out (FIFO)

        typedef struct _queue
        {
            VALUE array[CAPACITY];
            int front
            int size;
        } queue;

        queue q;

    Array-based implementation
        Dequeue: remove the most recent element from the front of the queue.

    In the general case, dequeue() needs to:
        Accept a pointer to the queue.
        Change the location fo the front of the queue.
        Decrease the size fo the queue.
        Return the value that was removed from the queue.

Just make sure to always maintain pointers to the head and tail of the linked list! (probably global)

To enqueue:
        - Dynamically allocate a new node;
        - Set its next pointer to NULL, set its prev pointer to the tail;
        - Set the tails next pointer to the new node;
        -move the tail pointer to the newly-created node.

To dequeue:
        - Traverse the linked list to its second element (if it exists);
        - Free the head of the list;
        - Move the head pointer to the (former) second element;
        - Make that nodes prev pointer to NULL.

