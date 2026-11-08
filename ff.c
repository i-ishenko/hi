#include <stdio.h>
#include <Windows.h>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(65001);
	float a;
	float b;
	float min;
	float max;
	printf("Введите первое число = ");
	scanf_s("%f", &a);
	printf("Введите второе число = ");
	scanf_s("%f", &b);
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;

	}
	printf("Большое число = %.2f\n", max);
	printf("Меньшее число = %.2f\n", min);
}