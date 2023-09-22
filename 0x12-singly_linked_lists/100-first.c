#include <stdio.h>

void __attribute__((constructor)) premain_1(void);
/**
 * premain - prints a string before the main function is executed
 */

void    premain_1(void)
{
    printf("You're beat! and yet, you must allow,\n"
    "I bore my house upon my back!\n");
}
