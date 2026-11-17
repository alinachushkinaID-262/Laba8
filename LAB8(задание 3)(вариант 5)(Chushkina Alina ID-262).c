#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// Объявление функции (прототип)
double calc_alternating(int n);

int main(void)
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int n;
	double result;

	printf("Вычисление выражения: 1.1 - 1.2 + 1.3 - ... (N слагаемых)\n");
	printf("Введите целое N (N < 10): ");
	if (scanf("%d", &n) != 1 || n <= 0 || n >= 10) {
		printf("Ошибка: введите целое положительное число меньше 10!\n");
		return 1;
	}

	// Вызов функции
	result = calc_alternating(n);

	printf("\nРезультат выражения = %.4f\n", result);

	return 0;
}

// Реализация функции без оператора if
double calc_alternating(int n)
{
	double sum = 0.0;
	double sign = 1.0; // 1-е слагаемое со знаком +, следующее со знаком -

	for (int i = 1; i <= n; i++)
	{
		double term = 1.0 + i * 0.1; // Члены ряда: 1.1, 1.2, 1.3...
		sum += sign * term;
		sign = -sign; // Чередование знака без использования if
	}

	return sum;
}