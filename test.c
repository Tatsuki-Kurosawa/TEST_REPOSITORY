#include <stdio.h>

int	main(void)
{
	char	array[7] = "abcdef";
	char	*ptr;

	ptr = array;
	printf("%s\n", ptr);
	printf("%p\n", ptr);
}
