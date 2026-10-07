#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> 

int main() {
	SetConsoleOutputCP(65001);
	int A, B, C;
	int shastchislo;
	printf("Введите три номера игроков (через пробел): ");
	scanf("%d %d %d", &A, &B, &C);
	shastchislo = (A + B + C) % 3 == 0; // % 3 находит остаток при делении на 3. если число без остатка, то выводится 1, если с остатком выводится 0
	printf("Счастливая тройка? (1 - да, 0 - нет): %d\n", shastchislo);
	return 0;
}