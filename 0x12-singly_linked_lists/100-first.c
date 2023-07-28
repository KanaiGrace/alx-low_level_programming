#include <stdio.h>

void fast(void) __attribute__((constructor));
/**
 * fast - print sent before main function is executed
 */
void fast(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
