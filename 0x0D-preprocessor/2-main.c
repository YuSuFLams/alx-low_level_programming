#include <stdio.h>
/**
 *main - prints the name of the file
 *
 *Return: always 0
*/

int main(void)
{
	char	*file;

	file = __FILE__;
	printf("%s\n", file);
	return (0);
}
