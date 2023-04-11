
# <h1>42 Libft</h1>


Libft is a static library written in C language that provides a set of pre-implemented functions for manipulating strings, characters, arrays, and other common programming operations. The library is designed to be included in C projects, especially those developed as part of the curriculum at 42 Network.

## Getting Started

To get started with **libft**, you can simply download or clone the repository to your local machine:

`git clone https://github.com/SopadeGalinha/42-Libft.git`

The repository contains the library's source code, along with a Makefile that can be used to compile the library.

To build the library, simply run the following command in the repository's root directory:

Mandatory : `make`

Bonus Part: `make bonus`

This will generate the **libft.a** file, which can be linked to your C project.

## How to use it

To compile your code you can do: 

`gcc yourmaincode.c libft.a`

## Functions

The library provides a wide range of functions that cover various common programming operations, such as:

### String manipulation:

ft_atoi.c, ft_itoa.c, ft_putchar_fd.c, ft_putendl_fd.c, ft_strjoin.c, ft_strdup.c
ft_putnbr_fd.c, ft_putstr_fd.c, ft_split.c, ft_strchr.c, ft_strlcat.c, ft_striteri.c
ft_strlcpy.c, ft_strlen.c, ft_strmapi.c, ft_strncmp.c, ft_tolower.c,
ft_strrchr.c, ft_strtrim.c, ft_substr.c, ft_toupper.c, ft_strnstr.c.

Character manipulation:
ft_isalnum.c, ft_isalpha.c, ft_isascii.c, ft_isdigit.c, ft_isprint.c

### Memory manipulation:

ft_memset, ft_bzero, ft_memcpy,
ft_memmove, ft_memchr, ft_memcmp,
ft_memalloc, ft_memdel, ft_memccpy.

### Bonus: Linked list manipulation:

ft_lstadd_back.c, ft_lstclear.c, ft_lstnew.c,
ft_lstdelone.c, ft_lstiter.c, ft_lstlast.c,
ft_lstmap.c, ft_lstsize.c, ft_lstadd_front.c.

Each function has it own description at the source of the code as a comment.
