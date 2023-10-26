#include "main.h"
/**
 * binary_to_uint - to convert binary to decima
 * @b: the variable binary
 * Return: to return the add
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int add, raise, k, l;
	int ba;

	add = 0;
	ba = 2;
	raise = 1;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		for (l = length - 1; l > 0; l--)
			raise = raise * ba;
		add = add + (raise * (b[k] - 48));
		length--;
		raise = 1;
	}
	return (add);
}
