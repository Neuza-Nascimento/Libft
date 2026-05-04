*This project has been created as part of the 42 curriculum by nedo-nas.*

# Libft

## Description

Welcome to Libft, a foundational project within the 42 curriculum designed to deepen your understanding of C programming by reimplementing essential standard library functions. This project challenges you to build your very own C library, a collection of versatile functions that will become an invaluable asset for your future assignments and projects. By undertaking this task, you'll not only grasp the inner workings of these fundamental functions but also hone your skills in memory management, error handling, and efficient code development. It's a journey into the core of C, preparing you for more complex challenges ahead.

## Instructions

To compile, install, and execute the Libft library, please follow these steps:

### Compilation

Navigate to the root directory of the project. The project includes a `Makefile` that handles the compilation process. To compile the main library, use the following command:

```bash
make
```

This will create the `libft.a` static library at the root of your repository, compiling all `.c` files with the `-Wall`, `-Wextra`, and `-Werror` flags using `cc`. The `Makefile` also includes rules for cleaning and recompiling:

*   `make all`: Compiles the library (same as `make`).
*   `make clean`: Removes all object files (`.o`).
*   `make fclean`: Removes all object files and the `libft.a` library.
*   `make re`: Performs `fclean` followed by `all`, effectively recompiling the entire project.


### Usage

To use the `libft` library in your own C projects, you need to:

1.  **Include the header**: Add `#include "libft.h"` in your source files.
2.  **Link the library**: When compiling your project, link `libft.a` using the `-L.` (to specify the library path) and `-lft` (to specify the library name) flags. For example:

    ```bash
    cc your_program.c -L. -lft -o your_program
    ```

    If your project's `Makefile` allows the use of `libft`, you should copy its sources and `Makefile` into a `libft` folder within your project. Your project's `Makefile` should then compile `libft` using its own `Makefile` before compiling your project.

## Resources

This project heavily relies on understanding the C standard library functions and linked list concepts. Here are some classic references and how AI was utilized in this project:

*   **C Standard Library Documentation**: The `man` pages for each function are the ultimate reference for their behavior and prototypes. For example, `man strlen` provides detailed information on the `strlen` function.
*   **AI Usage**: AI was used to assist in drafting this README file, ensuring a clear, human-like tone and structuring the content according to the project's requirements. It helped in summarizing the project goals and organizing the function descriptions.

## Library Functions

The Libft library encompasses a wide array of functions, categorized into Libc functions, additional functions, and linked list functions.

### Part 1 - Libc Functions

These functions are reimplementations of standard C library functions. They share the same prototypes and behaviors as the originals, prefixed with `ft_`.

*   **`ft_isalpha`**: Checks if a character is an alphabetic letter.
*   **`ft_isdigit`**: Checks if a character is a decimal digit.
*   **`ft_isalnum`**: Checks if a character is alphanumeric (letter or digit).
*   **`ft_isascii`**: Checks if a character fits into the ASCII character set.
*   **`ft_isprint`**: Checks if a character is printable, including the space character.
*   **`ft_strlen`**: Calculates the length of a string.
*   **`ft_memset`**: Fills a block of memory with a specific value.
*   **`ft_bzero`**: Erases the data in a block of memory by writing zeros to it.
*   **`ft_memcpy`**: Copies a block of memory from a source to a destination.
*   **`ft_memmove`**: Copies a block of memory, handling overlapping memory areas safely.
*   **`ft_strlcpy`**: Copies a string to a specific size, ensuring null-termination.
*   **`ft_strlcat`**: Concatenates two strings to a specific size, ensuring null-termination.
*   **`ft_toupper`**: Converts a lowercase letter to uppercase.
*   **`ft_tolower`**: Converts an uppercase letter to lowercase.
*   **`ft_strchr`**: Locates the first occurrence of a character in a string.
*   **`ft_strrchr`**: Locates the last occurrence of a character in a string.
*   **`ft_strncmp`**: Compares two strings up to a specified number of characters.
*   **`ft_memchr`**: Locates the first occurrence of a character in a block of memory.
*   **`ft_memcmp`**: Compares two blocks of memory.
*   **`ft_strnstr`**: Locates a substring within a string, searching up to a specified length.
*   **`ft_atoi`**: Converts a string representation of an integer to an `int`.
*   **`ft_calloc`**: Allocates memory for an array and initializes it to zero.
*   **`ft_strdup`**: Duplicates a string by allocating memory for a copy.

### Part 2 - Additional Functions

These functions provide utility beyond the standard libc, offering convenient string manipulation and output capabilities.

*   **`ft_substr`**: Allocates and returns a substring from a given string, starting at a specific index and with a maximum length.
*   **`ft_strjoin`**: Allocates and returns a new string resulting from the concatenation of two strings.
*   **`ft_strtrim`**: Allocates and returns a copy of a string with specified characters removed from the beginning and end.
*   **`ft_split`**: Allocates and returns an array of strings obtained by splitting a string using a specified delimiter character.
*   **`ft_itoa`**: Allocates and returns a string representing an integer.
*   **`ft_strmapi`**: Applies a function to each character of a string, creating a new string from the results.
*   **`ft_striteri`**: Applies a function to each character of a string, passing the character by address for potential modification.
*   **`ft_putchar_fd`**: Outputs a character to a specified file descriptor.
*   **`ft_putstr_fd`**: Outputs a string to a specified file descriptor.
*   **`ft_putendl_fd`**: Outputs a string to a specified file descriptor, followed by a newline.
*   **`ft_putnbr_fd`**: Outputs an integer to a specified file descriptor.

### Part 3 - Linked List Functions

These functions facilitate the creation and manipulation of linked lists using the `t_list` structure.

*   **`ft_lstnew`**: Allocates and returns a new list node, initializing its content and setting the next pointer to `NULL`.
*   **`ft_lstadd_front`**: Adds a new node at the beginning of a list.
*   **`ft_lstsize`**: Counts and returns the number of nodes in a list.
*   **`ft_lstlast`**: Returns the last node of a list.
*   **`ft_lstadd_back`**: Adds a new node at the end of a list.
*   **`ft_lstdelone`**: Frees the content of a node using a provided function and frees the node itself.
*   **`ft_lstclear`**: Deletes and frees a node and all its successors, setting the list pointer to `NULL`.
*   **`ft_lstiter`**: Iterates through a list and applies a function to the content of each node.
*   **`ft_lstmap`**: Iterates through a list, applies a function to each node's content, and creates a new list from the results.
