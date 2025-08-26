#include "3-cal.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Usage: %s num1 operator num2\n", argv[0]);
		return (1);
	}

    oprt = get_op_func(argv[2]);
    if (oprt == NULL)
    {
        printf("Error\n");
        return (1);
    }

    printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}