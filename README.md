
# C _PRINTF 
(*We would have called it Project FunPrintf because #CisFun, but we are serious people.*)

**In a nutshell** 🌰

Two Holbies at Holberton Lille picking their brains in order to program a function that mimics the basic functionalities of the printf() function.

![Holberton Logo](https://i.ibb.co/QYF8jHH/hippocampe-Rouge.png)








## Description
Welcome to Funprintf, where we embark on a whimsical journey to create our very own printf function in the charming world of C programming! 🚀

Description

Ever dreamt of crafting your printf magic? Look no further! In this delightful project, we've conjured a simple, yet ✨magical✨, replica of the printf function from the C programming language.

With the help of *Variadic functions*, playful *structs*, and a cast of merry *helper functions*, our program can dazzle you by displaying **characters**, **strings**, **integers**, and even the mystical **decimals (base 10)**.

Whatever format specifier you throw at our _printf function (except the ones we haven't programmed), it promises to perform its trickery and mirror the results of the legendary printf function.

The **printf** typical syntax is : 

    printf("format", arg_1, arg_2, ..., arg_n); 
where *"format"* is the character string enclosed in double quotes, and *arg_1, etc.* represent the arguments for printing the character string.

*But the fun doesn't stop there! 🎉 This project is not just about creating a printf clone; it's an invitation to explore an alternative method of crafting your own printf magic wand in the enchanting world of C.*



## Flowchart

![Flowchart](https://i.ibb.co/b2sPXLP/Capture-d-cran-2023-11-24-12-55-42.png)
## Prototype
    int _printf(const char *format, ...)

Returns: the number of characters printed (excluding the null byte used to end output to strings).

Write output to stdout, the standard output stream.

format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail.



## REQUIREMENTS

Allowed editors: 
- vi
- vim
- vim, 
- emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc

All your files should end with a new line

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

No more than 5 functions per file

The prototypes of all your functions should be included in your header file called main.h
## Man page

    man ./man_3_print
## Files

    _printf.c  

    _underscore_putchar.c

    getPrint.c

    main.h

    man_3_printf

    printCharacter.c 

    printNumber.c 

    printPercent.c 

    printString.c 
## Compiler

    **$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf**
## Test

The main.c File Test 

You'll make a main.c file to test the program, in order to see if the _printf function works exactly like how regular printf manages to. The main.c file should contain the code displayed below.

```
#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
## License

[MIT](https://choosealicense.com/licenses/mit/)

MIT License

Copyright (c) 11/29/2023 BELES Laetitia and IDRISSI Sarah

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


## Authors

- BELES Laetitia Hoberton  Lille C22 :  https://github.com/laetitiabeles
- IDRISSI Sarah  Hoberton  Lille C22 :  https://github.com/Fizzyfog

