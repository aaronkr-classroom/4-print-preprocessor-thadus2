#include <stdio.h>

int main() {
	char* name = "Park";

	putc(name, stdout);
	putchar(10);
	putchar(name);

	putchar(10);
	putchar(65);
	putchar(97);
	putchar(10);

	puts(name);
	puts("65");
	puts("97");
	puts("10");

	printf(name);

	return 0;
}