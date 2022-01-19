#include "libasm.h"

int main()
{
	char a[100] = "Supercalifragilistichespiralidoso";
	char b[100];
	char c[10] = "Chicco";

	//ft_strlen
	printf("FT_STRLEN\n %zu\n", ft_strlen(a));
	printf("STRLEN\n %lu\n", strlen(a));

	//ft_strcpy
	printf("\nFT_STRCPY\n %s\n", ft_strcpy(b, a));
	printf("STRCPY\n %s\n", strcpy(b, a));

	//ft_strcmp
	printf("\nFT_STRCMP\n %d\n", ft_strcmp(a, c));
	printf("STRCMP\n %d\n", strcmp(a, c));

	//ft_write
	printf("\nFT_WRITE\n");
	ft_write(1, &a, 33);
	printf("\nWRITE\n");
	write(1, &a, 33);

	//ft_read
	char buffer[1024];
	int fd = open("text.txt", O_RDONLY);
	ft_read(fd, buffer, 1024);
	printf("\n\nFT_READ\n %s\n", buffer);
	fd = open("text.txt", O_RDONLY);
	read(fd, buffer, 1024);
	printf("READ\n %s\n", buffer);

	//ft_strdup
	printf("\nFT_STRDUP\n %s\n", ft_strdup(a));
	printf("STRDUP\n %s\n", strdup(a));
}