#include <main.h>
/**
 * int main (__attribute__((unused))int argc, char *argv[]) - argc, argv
 * @i:compture
 * Return:0
 */
int main (__attribute__((unused))int argc, char* argv[])
	int i;
{
for (i = 0; i < argc; i++)
{	printf("argv[0] = %S\n", i, argv[i]);
}
	  return 0;
}

