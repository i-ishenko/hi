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
	printf("Введите первое число = ");//1234
	scanf_s("%f", &a);
	printf("Введите второе число = ");//hhh
	scanf_s("%f", &b);//рш
	if (a > b) {
		max = a;//ggggg
		min = b;
	}
	else {
		max = b;
		min = a;

	}
	printf("Большое число = %.2f\n", max);//hh
	printf("Меньшее число = %.2f\n", min);
}