*This project has been created as part of the 42 curriculum by jomatic.*

# libft — 42 Vienna Common Core Library

## Description

`libft` is a small, self-contained static C library reimplementing a subset of
the standard C library and a set of additional utility functions used in the
42 curriculum. The goal is to practise low-level C programming, memory
management, string and array manipulations, and to implement a simple linked
list API. This repository provides the library sources and the header
declaration; tests and example programs (such as `main.c`) are excluded from
this README and are not required for library usage.

## Instructions

Compilation (recommended using the included `Makefile`):

```bash
cd /path/to/repo/lbft
make
```

This will produce `libft.a` in the same folder.

Manual compilation with strict flags (`cc -Wall -Wextra -Werror`):

```bash
# Compile sources to object files with strict compiler flags
cc -Wall -Wextra -Werror -c *.c

# Create the static archive
ar rcs libft.a *.o
```

Linking the library into your program (use `cc` with strict flags):

```bash
cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

Or link directly against the archive:

```bash
cc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

Cleaning helpers provided by the `Makefile`:

```bash
make clean   # remove object files
make fclean  # remove object files and libft.a
make re      # fclean + make
```

## Detailed description of the library

The library implements a collection of functions grouped below. All dynamic
memory returned by the library (for example, from `ft_strdup`, `ft_substr`,
`ft_strjoin`, `ft_itoa`, or `ft_split`) must be freed by the caller.

- Character classification and conversion
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_toupper`, `ft_tolower`

- Memory manipulation
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
  - `ft_memchr`, `ft_memcmp`, `ft_calloc`

- String operations
  - `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
  - `ft_strlcpy`, `ft_strlcat`
  - `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`
  - `ft_split` (splits a string by a single-character delimiter)
  - `ft_strmapi` (allocate+map returning a new string), `ft_striteri` (in-place)

- Conversions and output
  - `ft_itoa` — integer to newly-allocated string
  - `ft_atoi` — string to integer
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

- Linked list utilities (bonus)
  - `t_list` node type: contains `void *content` and `t_list *next` pointer
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`,
    `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiteri`, `ft_lstmap`

Design notes and guarantees
- Functions aim to follow the behavior of their standard-lib equivalents
  (where applicable) with the same edge-case behaviors used in 42 tests.
- All functions using `size_t` and `int` mirror typical libc signatures.
- The library is compiled with strict warning flags: `-Wall -Wextra -Werror`.

## Resources

- The C Programming Language — Kernighan & Ritchie
- ISO C Standard documentation and libc man pages (`man 3 <function>`)
- 42 `libft` subject and evaluation instructions (internal curriculum)
- Linked list reference playlist: https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLpYOpjNLz0aGIL9xaFHbw16uEmFxzy2rs
- Classic manual-based references for basic C functions: `man strlen`, `man strcmp`, `man memcpy`, `man memset`, `man calloc`, etc.
- Tutorials and references: cppreference.com (string / memory pages),
  geeksforgeeks.org C articles, and manpages for behavior details.

### How AI was used

An AI assistant was used to help with some development tasks in this
repository. Specifically:

- Fixing compilation warnings and errors in implementation code (testing file main.c; iterative
  debugging of `main.c`).
- Refining the `README.md` (looking for typos and formating mistakes).

The AI assisted with code edits and documentation drafting; final review,
testing, and acceptance of changes were performed by the repository owner.

If you need a changelog listing which exact commits or lines were modified by
the AI, I can provide a concise summary or a git diff on request.

## License / Attribution

This project follows the requirements of the 42 curriculum. See individual
source files for author headers and attribution.
