# 42_libft

![Banner](libft.png "libft banner")

"This project is about coding a C library. It will contain a lot of general-purpose functions your programs will rely upon."

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [First Part](#first-part)
- [Second Part](#second-part)
- [Bonus](#bonus)
- [Makefile Overview](#makefile-overview)
- [License and glorious advice](#license-and-glorious-advice)

## Introduction

Libft is the initial project in the common core curriculum at 42 school. The objective of this project is to build your own library of functions that will later be utilized in almost all upcoming projects at 42. Over time, you can enhance this library with additional functions constructed during other projects, such as get_next_line and ft_printf. However, in this repository, you will only find the first version of Libft, containing the functions required by the project's specifications.

## Usage

To use the library in your project, follow these steps:
1. Clone the repository
```bash
git clone https://github.com/yourusername/42_libft.git
```
2. Do make to compile the files
```bash
make
```
This will generate the libft.a file in the root folder, that is library containing all the functions.
3. Go to your header file and include the library
```bash
# include "libft.h"
```

## First Part

In this initial phase of the project, you are tasked with re-implementing specific functions from the Libc Library. For a detailed list of functions included in this section, please refer to the [Subject](subject/subject.pdf).

## Second Part

The subsequent phase focuses on the development of a set of functions, either absent in the libc or presented in a different form. To explore the comprehensive list of functions in this section, check the [Subject](subject/subject.pdf).

## Bonus

For the bonus segment of the project, you will construct functions capable of manipulating lists. For a more detailed understanding of the functions in the bonus part, please consult the [Subject](subject/subject.pdf).

## Makefile Overview

In this project, the Makefile offers the following essential rules:

- **make**: Compiles the primary and secondary functions into `libft.a`.

- **make clean**: Cleans the directory by removing `.o` files, preserving `libft.a`.

- **make fclean**: Completely cleans the directory by deleting both `.o` files and `libft.a`.

- **make re**: Refreshes `libft.a` by recompiling everything.

Additionally:

- **make bonus**: Incorporates bonus functions into `libft.a`.

## License and glorious advice
[View License](LICENSE)

I strongly recommend to 42 students who are searching for resources to avoid using CTRL+C CTRL+D, as this is the cornerstone of all upcoming projects. 
Don't use any code that you can't reconstruct from scratch and/or don't understand. 
The lack of knowledge will become a significant problem over time. 
Good luck!
  
