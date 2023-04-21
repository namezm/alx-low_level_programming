#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of types of arguments passed
 *Return: nothing
 *
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i, j, c;
	char *s;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] === t_arg[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			c = 1;
			break;
		case 'i':
			printf("%d", var_arg(valist, int));
			c = 1;
			break;	
		case 'f':
			printf("%f", var_arg(valist, double));
			c = 1;
			break;
		case 's':
			s = var_arg(valist, char *);
			c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
