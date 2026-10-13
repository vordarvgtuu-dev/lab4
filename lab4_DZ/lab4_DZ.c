#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> 

int schastroika(int a, int b, int c);
int main() {
    SetConsoleOutputCP(65001);
    int A, B, C;
    int result;
    printf("Введите три номера игроков (через пробел): ");
    scanf("%d %d %d", &A, &B, &C);
    result = schastroika(A, B, C);
    printf("Счастливая тройка? (1 - да, 0 - нет): %d\n", result);
    return 0;
}

int schastroika(int a, int b, int c) {
    return (a + b + c) % 3 == 0;
}
