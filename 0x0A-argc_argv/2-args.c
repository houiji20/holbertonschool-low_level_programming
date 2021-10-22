#include <stdio.h>
/**
 * main- own name
 * @argc : number of argumen
 * @argv : array of argumen
 * Return:  0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);

	return (0);
}

