#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array value
 * @n: array length
 * @a: the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else if (i < n)
			printf("%d\n", a[i]);
	}
}