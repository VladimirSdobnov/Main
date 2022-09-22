#include<stdio.h>
#include<math.h>

int main() {

	int height, FirstSideOfTraingle;

	printf("Enter height of traingle and First side of traingle (format <a, h>): ");
	scanf_s("%d %d", &height, &FirstSideOfTraingle);

	float SpaceOfTraingle = FirstSideOfTraingle * (0.5 * height);

	printf("Space of traingle %.2f", SpaceOfTraingle);
}