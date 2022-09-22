#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int A, B, min, max;
	min = -100;
	max = 100;
	A = B = 0;


	A = min + rand() % (max - min + 1);
	B = min + rand() % (max - min + 1);


	if ((A > 100 || A < -100) && (B > 100 && B < 100)) {
		printf("Not in segment error\n");
	}
	else if ((B - A) < 0) {
		printf("Not correct data error\n");
	}
	else {
		printf("%d\n", B - A);
	}

	system("pause");
	return 1;
}