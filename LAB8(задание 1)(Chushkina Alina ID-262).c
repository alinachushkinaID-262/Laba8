#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // Для русского языка

// Объявление функции (прототип)
int sum_range(int m, int n);

int main(void)
{
	// Настройка консоли на UTF-8 (русский язык)
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int m, n;
	int s;

	printf("Введите большее число m и меньшее число n: ");
	if (scanf("%d %d", &m, &n) != 2) {
		printf("Ошибка ввода!\n");
		return 1;
	}

	// Вызов функции суммирования
	s = sum_range(m, n);

	// Вывод итогового результата
	printf("результат = %d\n", s);

	return 0;
}

// Реализация функции
int sum_range(int m, int n)
{
	int s = 0;
	int k = 1; // Счетчик выполненных итераций

	// Цикл for с уменьшением счетчика по условию задания
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("выполнено %d раз\n", k++);
	}

	return s;
}