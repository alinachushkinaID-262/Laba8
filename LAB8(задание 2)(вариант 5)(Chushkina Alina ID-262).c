#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // Для функции cos()
#include <windows.h> // Для русского языка

// Объявление функции (прототип)
double f_var5(double x);

int main(void)
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	double step;

	// 1) Вывод вычисляемой функции
	printf("Табулирование функции: y = x^2 - cos^2(x + 1) на [0.1; 2.2]\n");

	// 2) Ввод шага табуляции
	printf("Введите шаг табуляции (например 0.3): ");
	if (scanf("%lf", &step) != 1 || step <= 0.0) {
		printf("Ошибка: шаг должен быть положительным числом!\n");
		return 1;
	}

	// 3) Оформление результатов в виде таблицы
	printf("\n+---------+---------+\n");
	printf("| x | f(x) |\n");
	printf("+---------+---------+\n");

	for (double x = 0.1; x <= 2.2 + step / 2.0; x += step)
	{
		printf("| %7.2f | %7.4f |\n", x, f_var5(x));
	}

	printf("+---------+---------+\n");

	return 0;
}

// Реализация функции вычисления y
double f_var5(double x)
{
	double c = cos(x + 1.0);
	return (x * x) - (c * c);
}
