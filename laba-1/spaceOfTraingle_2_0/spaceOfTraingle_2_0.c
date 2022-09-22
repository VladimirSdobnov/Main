#include <stdio.h>
#include <math.h>

int main() {
	int A, B, C;
	double space, semiPerimetr;

	printf("Enter A, B, C <A B C>");
	scanf_s("%d %d %d", A, B, C);

	if (A <= 0 || B <= 0 || C <= 0) {
		printf("Not correct side of traingle");
	}
	else if (A <= (B + C) || B <= (A + C) || C <= (B + A)) {
		semiPerimetr = (A + B + C) * 0.5;
		space = sqrt(semiPerimetr*(semiPerimetr-A) * (semiPerimetr - B) * (semiPerimetr - C));
		printf('%lf', &space);
	}


	system("pause");
	return 1;
}