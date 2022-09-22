#include<stdio.h>

int main() {

	int day, month, year, hours, minutes, seconds;

	printf("Enter date ( format <day.month.year> ) ");
	scanf_s("%d.%d.%d", &day, &month, &year);

	system("cls");

	printf("Enter time ( format <hours:minutes:seconds> ) ");
	scanf_s("%d:%d:%d", &hours, &minutes, &seconds);

	system("cls");

	printf("I remember %d.%d.%d %d:%d:%d\n", day, month, year, hours, minutes, seconds);

	system("pause");
	return 0;
}