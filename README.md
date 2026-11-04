*This project has been created as part of the 42 curriculum by ragliga*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build our own C static library (`libft.a`): a collection of general-purpose functions that will be reused in all future projects.

By re-implementing standard `libc` functions and writing a few extra utilities, the project teaches how these functions really work, how to manage dynamic memory safely (no leaks, no crashes), and how to follow the Norm. The library is organized in three parts: `libc` re-implementations, additional string/memory/output helpers, and linked list manipulation.

## Library overview

All functions are declared in `libft.h`.

- **Part 1 – Libc functions** (prefixed with `ft_`, same behavior as the originals): character checks and conversions (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`), string functions (`strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`), memory functions (`memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`) and `atoi`.
- **Part 2 – Additional functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and file-descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
- **Part 3 – Linked lists**, built on the `t_list` structure (`void *content` and `struct s_list *next`): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions

### Compilation

The library is compiled with `cc -Wall -Wextra -Werror` and archived with `ar`.

```bash
make          # build libft.a at the root of the repository
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean, then all
```

### Usage

Include the header in your source files:

```c
#include "libft.h"
```

Then compile and link against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

## Resources

- [C programming video playlist](https://youtube.com/playlist?list=PLBlnK6fEyqRi3-lvwLGzcaquOs5OBTCww&si=xyxirmWrJXrHN8rA)
- [Linux manual pages, section 3 (man7.org)](https://man7.org/linux/man-pages/man3/): reference for the exact behavior of each `libc` function.

### Use of AI

Claude was used as a **mentor and guide only**, not as a code generator:

- helping to understand the subject requirements (Norm, Makefile, repository structure);
- helping to structure and write this README.