# My Libft
This is the first real project from the Core Common curriculum from 42SP where we are supposed to create our own versions of some of the most common functions from the C Library. All functions should start with `ft_`.
These functions are divided in 3 parts:

### Part 1
A set of functions that already exist in **libc**, like:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup

### Part 2
Additional functions that are not included in **libc**, or exist in a different form:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Part 3
Functions with the sole purpose of handling Linked Lists:
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

# How to compile and test
To compile all functions you simply have to be on the root of the project and run the command `make`, which should compile all the functions into a single static library file called 'libft.a', which is gonna be used in the future for the most complex programs and functions.
