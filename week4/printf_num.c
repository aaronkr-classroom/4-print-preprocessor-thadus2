#include <stdio.h>

int main() {
	int small = 7,
		mid = 147,
		big = 77441;

	printf("[%5d] [%05d] [%-5d]\n", small, small, small);
	printf("[%5d] [%05d] [%-5d]\n", mid, mid, mid);
	printf("[%5d] [%05d] [%-5d]\n", big, big, big);

	return 0;
}