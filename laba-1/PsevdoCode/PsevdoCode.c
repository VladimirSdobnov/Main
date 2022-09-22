#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<stdbool.h>

int main() {
	
	int X, Y, tmp, Modules;
	double Answer;
	bool flag;

	flag = false;
	scanf_s("%d %d", &X, &Y);

	if (X > Y) {
		if ((X > -10 && X < 10) && (Y > -10 && Y < 10)) {
			Answer = X - Y;
		}
		else if ((X < -10) && (Y < -10)) {
			Answer = X*X + Y*Y;
		}
		else if ((X > 10) && (Y > 10)) {
			Answer = sqrt(X) + sqrt(Y);
		}
		else if ((X == 100 || X == -100) && (Y == 100 || Y == -100)) {
			;
		}
		else {
			printf("Uncorrect data error");
		}
	}
	else {
		X = rand();
		Y = rand();
		printf("%d %d", X, Y);

		tmp = X;
		X = Y;
		Y = tmp;

		Modules = abs(X) - abs(Y);
		if (Modules >= 0) {
			Answer = sqrt(Modules);
		}
		else {
			Answer = sqrt(abs(Modules));
			flag = true;
		}
	}
	if (!flag) {
		printf("Answer = %d \n", Answer);
	}
	else {
		printf("Answer = %d i\n", Answer);
	}
	return 1;
}