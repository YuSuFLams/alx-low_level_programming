#include <stdio.h>

void __attribute__((constructor)) premain(void);
/**
 * premain - prints a string before the main function is executed
 */

void    premain(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
