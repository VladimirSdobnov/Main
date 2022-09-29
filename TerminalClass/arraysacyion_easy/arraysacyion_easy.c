#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
	srand(time(0));

	int mass[10000000];
	int size;

	printf("Enter massive size (less 100000): ");
	scanf_s("%d", &size);
	for (int i = 0, i < size, i++) {
		mass[i] = -10 + rand() % 10;
		printf("%d ", mass[i]);
	}
	return 1;
}