
# <h1>42-Libft</h1>


42-Libft is a static library written in C language that provides a set of pre-implemented functions for manipulating strings, characters, arrays, and other common programming operations. The library is designed to be included in C projects, especially those developed as part of the curriculum at 42 Network coding schools.

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

`gcc yourcode.c libft.a`

## Functions

The library provides a wide range of functions that cover various common programming operations, such as:

String manipulation (ft_strlen, ft_strcpy, ft_strcat, etc.)
Character manipulation (ft_isalpha, ft_isdigit, ft_toupper, etc.)
Memory allocation (ft_memset, ft_memcpy, ft_memalloc, etc.)

Bonus: Linked list manipulation (e.g., ft_lstnew, ft_lstadd, ft_lstiter, etc.)

Each function has it own description at the source of the code as a comment.
