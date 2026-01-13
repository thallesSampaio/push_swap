*This project has been created as part of the 42 curriculum by thasampa.*

# Description

The **push_swap** project consists of sorting a stack of integers using a limited set of
operations and an auxiliary stack.  
The goal is to output the **smallest possible sequence of operations** that sorts the
numbers in ascending order.

Only two stacks are allowed:
- **Stack A**: initially contains all numbers.
- **Stack B**: initially empty and used as auxiliary storage.

The challenge of this project lies in designing an efficient algorithm under strict
constraints, both in terms of allowed operations and performance (number of moves).

This implementation uses:
- Dedicated sorting strategies for small inputs (2 to 5 numbers).
- **Indexing** to normalize values.
- A **binary radix sort** approach for larger inputs, ensuring correctness and acceptable
performance within the project limits.

---

# Instructions

### Compilation

Compile the project using:

```bash
make
```
This will generate the executable:

```bash
./push_swap
```
### Execution

Run the program by passing a list of integers as arguments:
```bash

./push_swap 3 2 1 
./push_swap "3 2 1"
./push_swap "3" 2 "1"
```
The program outputs a sequence of operations (sa, pb, ra, etc.) that will sort the
numbers.
Validation with the checker

To verify correctness, pipe the output into the checker:
```bash
ARG="3 2 1"
./push_swap $ARG | ./checker_linux $ARG
```
Expected output:

OK


# Technical Overview
## Sorting strategy

    2 elements: simple swap if needed.

    3 elements: hardcoded minimal cases.

    4–5 elements: push the smallest values to stack B, sort remaining elements, then
    push back.

    >5 elements:

        Values are indexed from 0 to n-1.

        A binary radix sort is applied using only stack operations.

## Data structures

    Singly linked list implementation for stacks.

    Each node stores:

        value (used for sorting, replaced by index for radix)

        index (ranking of the original value)

## Error handling

The program prints Error to stderr and exits if:

    Arguments are not valid integers.

    Values are outside the int range.

    Duplicate numbers are detected.

# Resources
## References

    42 subject PDF: push_swap

    Radix Sort (binary):

        https://en.wikipedia.org/wiki/Radix_sort

    Stack operations and algorithm design:

        https://www.geeksforgeeks.org/stack-data-structure/

    Complexity and optimization discussions:

        https://en.wikipedia.org/wiki/Sorting_algorithm

# Use of AI

AI assistance (ChatGPT) was used as a learning and support tool during development for:

    Understanding algorithmic strategies (radix sort, small-case optimizations).

    Reviewing edge cases.

    Assisting with documentation (README structure and clarity).

All implementation decisions, code writing, and final validations were performed by the
student.