#include <stdio.h>
#include <math.h>

int main() {
	int A, B;

	printf("Enter A and B in [-100; 100] <A B>\n");
	scanf_s("%d %d", &A, &B);

	if ((A > 100 || A < -100) && (B > 100 && B < 100)) {
		printf("Not in segment error\n");
	}
	else if ((B - A) < 0) {
		printf("Not correct data error\n");
	}
	else {
		printf("%d\n", B-A);
	}

	system("pause");
	return 1;
}