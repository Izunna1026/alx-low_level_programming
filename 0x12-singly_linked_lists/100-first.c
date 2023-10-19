#include <stdio.h>
void trial(void)__attribute__ ((constructor));
/**
 * trial - to print
 *
 * Return: to return nothing
 */
void trial(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
