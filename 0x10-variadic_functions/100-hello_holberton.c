#include <unistd.h>

int main(void)
{
	register char* str = "Hello, Holberton";
	write(1, str, sizeof(str) - 1);
	return (0);
}
