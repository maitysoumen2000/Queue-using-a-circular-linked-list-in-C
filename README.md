# Queue Implementation Using Circular Linked List in C

## Overview
This program implements a **queue using a circular linked list** in C. It supports basic queue operations like `enqueue`, `dequeue`, `peek`, and `display`. The circular linked list ensures that the `next` pointer of the last node points back to the first node, creating a circular structure.

---

## Features

1. **Queue Operations**:
   - **Enqueue**: Adds an element to the end of the queue.
   - **Dequeue**: Removes an element from the front of the queue.
   - **Peek**: Retrieves the front element without removing it.
   - **Display**: Prints all elements in the queue.

2. **Circular Linked List**:
   - The queue is implemented using a circular linked list, where the `next` pointer of the last node points back to the first node.
   - This allows for efficient handling of the queue without needing to resize or shift elements like in an array-based queue.

3. **Dynamic Memory Allocation**:
   - Nodes are dynamically allocated using `malloc`, providing flexibility in memory usage.

---

## Files

### `queue_using_circular_linked_list.c`
This file contains the source code for:
- `push(struct node *last, int data)`: Adds elements to the queue.
- `pop(struct node *last)`: Removes elements from the queue.
- `peek(struct node *last)`: Retrieves the front element of the queue.
- `display(struct node *last)`: Displays the elements of the queue.

---

## Functions

### 1. `struct node *push(struct node *last, int data)`
- **Purpose**: Adds an element to the queue.
- **Parameters**:
  - `last`: A pointer to the last node in the queue.
  - `data`: The value to be enqueued.
- **Logic**:
  - If the queue is empty, create a new node that points to itself (making it circular).
  - If the queue is not empty, create a new node and insert it after the `last` node, updating the `last` pointer to the new node.

---

### 2. `struct node *pop(struct node *last)`
- **Purpose**: Removes an element from the front of the queue.
- **Parameters**:
  - `last`: A pointer to the last node in the queue.
- **Logic**:
  - If the queue is empty, print an error message.
  - If there is only one element in the queue, set `last` to `NULL` after removing the node.
  - Otherwise, remove the node at the front and update the `last` pointer to the new last node.

---

### 3. `void display(struct node *last)`
- **Purpose**: Prints all elements in the queue.
- **Parameters**:
  - `last`: A pointer to the last node in the queue.
- **Logic**:
  - Start from the node after `last` and traverse the circular linked list until the entire queue is printed.

---

### 4. `struct node *peek(struct node *last)`
- **Purpose**: Retrieves the front element of the queue without removing it.
- **Parameters**:
  - `last`: A pointer to the last node in the queue.
- **Logic**:
  - Print the value of the node after `last`, which represents the front of the queue.

---

## Usage

1. **Compilation**: Compile the program using a C compiler:
   ```bash
   gcc -o queue_using_circular_linked_list queue_using_circular_linked_list.c
