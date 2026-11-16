*This project has been created as part of the 42 curriculum by aaudi.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum in C. The goal is to build my own static C library (`libft.a`) that re-implements a set of standard C library functions, adds some useful utility functions, and provides a small linked list API. This library is then reused in later 42 projects.

The project is split into three parts:

1. **Libc functions**: re-implementations of standard functions (`strlen`, `memcpy`, `atoi`, `strchr`, ...), with the same prototypes and behavior as the originals.
2. **Additional functions**: useful functions that are not in the standard libc or that exist in a different form (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, ...).
3. **Linked lists**: a set of functions to create and manipulate singly linked lists using the `t_list` structure.

Only the functions allowed by the subject are used (mainly `malloc`, `free` and `write`), and the code follows the 42 Norm.

## Library description

### Part 1: Libc functions

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2: Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string (allocated). |
| `ft_strjoin` | Concatenates two strings into a new allocated string. |
| `ft_strtrim` | Removes a set of characters from the start and end of a string. |
| `ft_split` | Splits a string using a delimiter character into an array of strings. |
| `ft_itoa` | Converts an integer to an allocated string. |
| `ft_strmapi` | Applies a function to each character (with its index) and returns a new string. |
| `ft_striteri` | Applies a function to each character (with its index) of a string, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3: Linked lists

The list nodes use this structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (with `del`) and the node itself. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content. If an allocation fails, it frees everything already built and returns `NULL`. |

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar`

### Compilation

From the root of the repository:

```bash
make          # builds libft.a (all functions, including the linked list ones)
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + make
```

All files are compiled with the flags `-Wall -Wextra -Werror`.

### Usage

Each source file contains a commented-out `main` that shows how to test its function. To try one, uncomment it, compile it with the library, and run it.

To use the library in your own code, include the header:

```c
#include "libft.h"
```

Then compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

### Example

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("world")));
    printf("%d nodes\n", ft_lstsize(list));   // 2 nodes
    ft_lstclear(&list, del_content);
    return (0);
}
```

Note: the `del` function frees the content, so the content must have been allocated with `malloc` (here with `ft_strdup`). Never pass a string literal to a `del` function that calls `free`.

## Resources

### References

- `man 3` pages for each re-implemented function (`man 3 strlen`, `man 3 memmove`, ...)
- The C Programming Language, Kernighan & Ritchie
- Linked lists, Wikipedia: https://en.wikipedia.org/wiki/Linked_list
- Linked list tutorials on GeeksforGeeks and Programiz
- Dynamic memory in C (`malloc`, `free`), cppreference: https://en.cppreference.com/w/c/memory
- The 42 Norm (official PDF)
- Valgrind documentation (for leak checking): https://valgrind.org/docs/manual/

### Use of AI

AI (Claude) was used as a learning and review tool, not to replace my own work. It was used for:

- Understanding how linked lists work in C: nodes, pointers, double pointers (`t_list **`), and what happens in memory (stack vs heap).
- Getting step-by-step explanations of the linked list functions (`ft_lstnew`, `ft_lstadd_front`, `ft_lstdelone`, `ft_lstclear`, `ft_lstmap`), especially memory management and the failure case of `ft_lstmap`.
- Understanding how to detect and avoid memory leaks.
- Help structuring this README.

I tested all the code myself, and I can explain every line of the submitted code.

