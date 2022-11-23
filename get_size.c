#include "main.h"

/**
<<<<<<< HEAD
 * get_size - Calculates the size to cast the argument
=======
 * get_size -Calculates the size to cast the argument
>>>>>>> 4e1b31ed200d581f85efca18afabddd93d7605c9
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
<<<<<<< HEAD
		size = S_SHORT;
=======
		size = s_short;
>>>>>>> 4e1b31ed200d581f85efca18afabddd93d7605c9

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
