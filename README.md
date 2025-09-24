# Aim
To study and implement **singly linked lists** in C++ and understand node creation, insertion, and traversal.

# Software Required
- Visual Studio Code  
- Windows / Linux

# Theory

A **linked list** is a linear data structure in which elements, called **nodes**, are connected using **pointers**. Each node contains:
1. **Data**: stores the value of the node.
2. **Next pointer**: points to the next node in the list (or `NULL` if it’s the last node).

### Key Features
- Dynamic size: Memory is allocated at runtime.
- Easy insertion/deletion: Unlike arrays, no shifting of elements is required.
- Traversal starts from **head** and continues till `NULL`.
- Types of singly linked lists:
  - **Single Node List**
  - **Multiple Nodes (manual linking)**
  - **Insertion at head**

---

# Algorithm & Programs

## Program 1: Insert at Head

**Objective:** Add nodes to the beginning of a linked list.

**Steps:**
1. Start
2. Define a class `Link` (or `Node`) with:
   - Data member: `data` (integer)
   - Pointer to next node: `next`
3. Define a constructor to initialize `data` and set `next` to `NULL`.
4. Create a function `insert_head()`:
   - Input: reference to `head` and `data`
   - Create new node
   - Point new node's `next` to current `head`
   - Update `head` to the new node
5. Create a function `disp()` to display the list:
   - Traverse from `head` till `NULL`
   - Print each node's data
6. In `main()`:
   - Initialize `head` as `NULL`
   - Call `insert_head()` multiple times
   - Call `disp()` to show the linked list after each insertion
7. End

---

## Program 2: Manual Node Linking

**Objective:** Create a linked list by manually connecting nodes.

**Steps:**
1. Start
2. Define a class `Node` with:
   - Data member: `val` (integer)
   - Pointer `next`
3. Constructor initializes `val` and sets `next` to `NULL`
4. In `main()`:
   - Dynamically create nodes (e.g., `n1`, `n2`, `n3`)
   - Manually link nodes using `next` pointers (`n1->next = n2`, etc.)
   - Use a temporary pointer `temp` to traverse the list
   - Print all node values
5. End

---

## Program 3: Single Node Linked List

**Objective:** Create and traverse a linked list with only one node.

**Steps:**
1. Start
2. Define class `Node` with `val` and `next`
3. Constructor initializes `val` and sets `next` to `NULL`
4. In `main()`:
   - Create a single node dynamically
   - Use a temporary pointer `temp` to traverse the list
   - Print node value
5. End

---

### Summary

| Program | Type                  | Key Concept                              |
|---------|----------------------|------------------------------------------|
| 1       | Insert at Head        | Adds new nodes at the **beginning**      |
| 2       | Manual Linking        | Connect nodes explicitly using `next`   |
| 3       | Single Node           | Simplest linked list with only one node |

**Concepts Covered:**
- Node creation using classes
- `next` pointer usage
- Dynamic memory allocation with `new`
- Traversal of singly linked lists
