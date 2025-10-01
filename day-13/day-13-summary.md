# Linked Lists and Basic Data Structures - Part 1

## Singly Linked List

### What is a Linked List?
A linear data structure where each element (node) points to the next. Unlike arrays, memory is not contiguous.

### Node Structure
```c
struct Node {
    int data;
    struct Node* next;
};
```

### Basic Operations
- Create Node
- Insert at Beginning
- Insert at End
- Delete by Value
- Print List


### Advantages
- Dynamic memory allocation
- Easy insert/delete (no shifting)

### Disadvantages
- No direct access (O(n) search)
- Extra memory for pointers


