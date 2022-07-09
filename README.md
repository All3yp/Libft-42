# 42cursus - Libft

## About

This project allows students to work with the basics of the language. Pointers, memory allocation, operations with data structures, as well as the creation of header and Makefile files.

The purpose of this project is to re-code some `libc` functions, as well as other common utility functions to be reused in the subsequent 42 projects.

> Note: this Makfile `doesnt` compiled on Molinette. You need to make it as simple as possible, without any customization.

## Grade and Badge

<img width="200" alt="grade" src="https://user-images.githubusercontent.com/29764688/178086302-efb15b2b-77fb-4a20-a27b-58d9d87c740e.png"><img width="150" alt="libft" src="https://user-images.githubusercontent.com/29764688/178086308-b2de02d7-7434-4e46-825d-1a4ac70443c5.png">


# Clone
Open a terminal and run following command:
```
git clone <repository url>
```
# Run
Go to the created repository and run following command:
```
make
```
# How to use
Make sure libft.a and libft.h are in the same directory that you want to call the functions from. Include libft.h in your files
```c
#include "libft.h"
```
Compile your files with libft.a
```bash
gcc yourfile_01.c yourfile_02.c libft.a
```
Use clean to delete all object files, fclean to remove all object files and libft.a and re to recompile the library
```bash
make clean / make fclean / make re
```
# Explanations

### Functions from `<ctype.h>` library

* [`ft_isascii`](ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](ft_strlen.c)				- find length of string.
* [`ft_strchr`](ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strdup`](ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](ft_strlcat.c)			- size-bounded string concatenation.


### Other functions

* [`ft_putchar_fd`](ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](t_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](ft_striteri.c)			- applies a function to each character of the string passed as argument.

<br />

### Additional Bonus Functions - Linked List
<br />

> The lst-funtcions allow you to manipulate and use lists. Lists are quiet useful if you dont know the final length of an array because you can just append as many nodes as you until you run out of memory.

```c
typedef struct		s_list
{
	void		*content;
	struct s_list	*next;
}	       		t_list;
```


* [`ft_lstnew`](ft_lstnew.c)				- create new list.
* [`ft_lstsize`](ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](ft_lstmap.c)				- apply function to content of all list's elements into new list.

<br />

## Testing the Library

> There is different script created by 42 students around the world to test many cases on your functions

[Tripouille](https://github.com/Tripouille/libftTester)<br />
[Libft war machine](https://github.com/y3ll0w42/libft-war-machine)<br /> 
[Libft-unit-test](https://github.com/alelievr/libft-unit-test)<br />
