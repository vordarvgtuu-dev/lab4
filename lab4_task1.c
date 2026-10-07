#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int task1() {
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Задание 1.\n1) %c\n", c);
	printf("2) %d\n", i);
	printf("3) %f\n", f);
	printf("4) %e\n", d);

}

int task1a() {
	float num;
	printf("\nЗадание 1а.\nВведите вещественное число: ");
	scanf("%f", &num);

	int cel = (int)num;
	float ost = num - cel; 

	printf("Целая часть: %d\n", cel);
	printf("Дробная часть: %f\n", ost);

}

int task1b() {
	char sym;
	printf("\nЗадание 1б.\n");
	printf("Введите ОДИН любой символ: ");
	scanf(" %c", &sym);
	printf("Десятичный код символа: %d\n", sym);
	printf("Шестнадцатеричный код символа: 0x%X\n\n", sym);
}

int task1B() {
	int i2;
	printf("\nЗадание 1в.\n");
	printf("Введите целое число i НЕ равное нулю: ");
	scanf("%d", &i2);
	double res = 1.0 / i2;
	printf("Десятичное число для 1/%d равно: %f\n", i2, res);
}

int main() {
	SetConsoleOutputCP(65001);
	task1();
	task1a();
	task1b();
	task1B();
	return 0;
}