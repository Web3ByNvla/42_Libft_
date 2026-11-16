*This project has been created as part of the 42 curriculum by gunovell.*

# 42 Libft by NOVELLA

## Description

Libft is a C library that reimplements useful functions from the standard C
library and adds utility functions required by the 42 curriculum. Its goal is
to provide a reusable foundation for later C projects, while practicing
memory management, pointer handling, string processing, and linked lists.

The library is built as the static archive `libft.a`. Its public declarations
and the `t_list` linked-list type are provided in `libft.h`.

### Library contents

- **Character checks and conversion:** `ft_isalpha`, `ft_isdigit`,
  `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, and `ft_toupper`.
- **Memory operations:** `ft_bzero`, `ft_calloc`, `ft_memchr`, `ft_memcmp`,
  `ft_memcpy`, `ft_memmove`, and `ft_memset`.
- **String operations:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,
  `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_substr`,
  `ft_strjoin`, `ft_strtrim`, and `ft_split`.
- **String transformations:** `ft_atoi`, `ft_itoa`, `ft_strmapi`, and
  `ft_striteri`.
- **Linked lists:** `ft_lstnew`, `ft_lsadd_front`, `ft_lstadd_back`,
  `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
  and `ft_lstmap`. These functions use `t_list`, a singly linked list whose
  nodes store a `void *` content pointer and a pointer to the next node.
  Deletion and mapping functions accept callbacks so callers can define how
  node content is freed or transformed.
- **File-descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd`, and `ft_putnbr_fd` write characters, strings, or integers
  to a specified file descriptor.

Functions that allocate memory return storage that the caller must release
with `free`. List cleanup functions call the supplied deletion callback for
node contents.

## Instructions

### Requirements

- A C compiler such as `cc` or `gcc`.
- `make` and the system `ar` archiver.

### Build the library

From the repository root, run:

```sh
make
```

This compiles the `ft_*.c` files and creates `libft.a`. To remove object files
and the archive, run `make clean` or `make fclean`. To rebuild from scratch,
run `make re`.

### Test the library

You can test this project with my [42 Libft Tester](https://github.com/Web3ByNvla/42-Libft-Tester-).
See the tester repository for its setup and usage instructions.

### Use the library

Include the public header in a C source file:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

Compile and link the program from the repository root, replacing `main.c`
with the name of your source file:

```sh
cc -Wall -Wextra -Werror -I. main.c -L. -lft -o app
./app
```

## Resources

- The 42 Libft project subject and the C standard library documentation.
- Linux man-pages: [`ctype(3)`](https://man7.org/linux/man-pages/man3/ctype.3.html),
  [`string(3)`](https://man7.org/linux/man-pages/man3/string.3.html),
  [`malloc(3)`](https://man7.org/linux/man-pages/man3/malloc.3.html), and
  [`write(2)`](https://man7.org/linux/man-pages/man2/write.2.html).
- cppreference, [C string and memory functions](https://en.cppreference.com/w/c/string/byte.html).
- The C advanced ebook :
	https://github.com/MTJailed/C-Programming-Books/blob/master/Advanced%20C.pdf

### AI usage

AI assistance was used to review the project documentation requirements and help
adapt the test build configuration to the repository's flat source layout. It
also help to creat the README file. 