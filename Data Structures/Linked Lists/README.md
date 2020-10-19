# Linked List

> Linked list is a linear data structure, the nodes are connected using pointers.Each node contains two parts, a 'data' to store value and a 'pointer' to point to next node.

## Advantages over arrays
+ Size of arrays is fixed, so before using an array we have to define the number of elements in it, linked lists can be used to have dynamic size, we can expand the number of nodes in list at any time.
+ Inserting a new element in an array costs a lot of time, but in linked lists if the position to be inserted is known the insertion operation can be done in O(1) time.
+ Ease of deletion and insertion.

## Drawbacks
+ We cannot access a element with a index value or random access, only sequential access or traversal is possible.
+ We need to use a extra pointer variable to access successive nodes.
+ They do not have contiguous memory locations so not useful in cache friendly applications.
