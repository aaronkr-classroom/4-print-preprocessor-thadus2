#include <stdio.h>

#define MESSAGE "Hello, World"


int main() {
	puts("Using puts() : ");
	puts(MESSAGE);

	puts("\nUsing putchar() : ");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	putchar('\n');

	puts("\nUsing putc() : ");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i],stdout);
	}
	putc('\n', stdout);

	return 0;
}