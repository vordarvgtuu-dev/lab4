#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    int n;
    printf("Введите целое трехзначное число n: ");
    scanf("%d", &n);
    int last = n % 10;
    int first = n / 100;        
    int mid = (n / 10) % 10; 
    int sum = first + mid + last;
    int revers = last * 100 + mid * 10 + first;

    printf("\nПоследняя цифра: %d \nGервая: %d \nCумма цифр: %d \nXисло наоборот: %d\n",
        last, first, sum, revers);
    return 0;
}