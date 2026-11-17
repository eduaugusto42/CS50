LINEAR SEARCH

In linear search, the idea of the algorithm is to iterate across the array from left to right, searching for a specified element.

In pseudocode:
    Reteat, starting at the first element:
        if the first element is what you are looking for (the target), stop.
        otherwise, move to the next element.

Worst-case scenario:
    We have to look through the entire array of n elements, either because the target element is the last element of the array or does not exist in the array at all.

Best-case scenario:
    The target element is the first element of the array, and so we can stop looking immediately after we start.
