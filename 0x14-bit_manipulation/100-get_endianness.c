#include "main.h"
/**
 * get_endianness - to check the order
 *Return: little
 */
int get_endianness(void)
{
	int k = 1;
	int litt;

	litt = (int) (((char *) &k)[0]);
	return (litt);
}
