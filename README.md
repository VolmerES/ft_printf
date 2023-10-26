![Logo](https://www.42network.org/wp-content/themes/e42-network/img/42-network-logo.svg)
# 🖨️ ABOUT FT_PRINTF 🖨️

ft_printf is a custom implementation of the C standard library function printf in C. This project provides a versatile and extensible printf function that can be used to format and print various data types to the standard output. It offers a comprehensive set of format specifiers, allowing you to control the appearance of data in your C programs. Designed as a learning exercise, this printf implementation serves as a useful educational tool for understanding string formatting and variadic functions in C


## 📝 Instructions 📝
1.- Compile

To compile, go to the library path and run:

```bash
$ make
```

2.- Usage

To use the library functions in your code, simply include its header:


```c
#include "ft_printf.h"

```
## 🔎 What's inside? 🔎

| Functions             | Other                                                              |
| ----------------- | ------------------------------------------------------------------ |
| ft_printf.c | Makefile|
| ft_putnbr_base.c | ft_printf.h|
| ft_strlen.c |
| ft_putstr_fd.c|
| ft_putchar_fd.c|

## ⚒️ Testing ⚒️

[![Francinette Tester 🔗](Francinette)](https://github.com/xicodomingues/francinette)

**To standart test, go to the library path and run:**

All standard tests should work perfectly. 
```bash
$ paco
```
**To strict test, go to the library path and run:**

The "strict" tests do not work correctly, the function does not return -1 and lacks certain protections...
```bash
$ paco -s
```
The "strict" tests do not work correctly, the function does not return -1 and lacks certain protections...
## 🗒️ NOTES 🗒️

The bonus part of the project is not included.


## 🚀 About Me
I'm 42Network student at 42Madrid(Spain)

You I track my progress through the common core at: 

[![Intra 42 🔗]()](https://projects.intra.42.fr/projects/graph?login=jdelorme)

More about:

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/juan-bautista-delorme-pinedo-000697264/)
