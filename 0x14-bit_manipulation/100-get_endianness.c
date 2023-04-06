#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1) {
		return (1);   // little endian
	} else {
		return (0);   // big endian
	}
}
