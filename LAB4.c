#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 

int task1() {
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("Задание 1\n1) %c\n", c);
    printf("2) %d\n", i);
    printf("3) %f\n", f);
    printf("4) %e\n", d);
    return 0;
}

int task1a() {
    float num;
    printf("\nЗадание 1а.\nВведите вещественное число: ");
    scanf("%f", &num);
    int cel = (int)num;
    float ost = num - cel; 
    printf("Целая часть: %d\n", cel);
    printf("Дробная часть: %f\n", ost);
    return 0;
}

int task1b() {
    char sym;
    printf("\nЗадание 1б.\n");
    printf("Введите ОДИН любой символ: ");
    scanf(" %c", &sym);
    printf("Десятичный код символа: %d\n", sym);
    printf("Шестнадцатеричный код символа: 0x%X\n\n", sym);
    return 0;
}

int task1B() {
    int i2;
    printf("\nЗадание 1в.\n");
    printf("Введите целое число i НЕ равное нулю: ");
    scanf("%d", &i2);
    double res = 1.0 / i2;
    printf("Десятичное число для 1/%d равно: %f\n", i2, res);
    return 0;
}

int task2() {
    puts("\nЗадание 2");
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;

    printf("Неявные преобразования\n");
    printf("x (int)    = %d\n", x);
    printf("y (float)  = %f\n", y);
    printf("z (double) = %lf\n", z);
    printf("Поскольку переменные изначально типа int, то при делении дробь убирается безвозвратно.\n");
    return 0;
}

int task3() {
    puts("\nЗадание 3");
    int n;
    printf("Введите целое трехзначное число n: ");
    scanf("%d", &n);
    int last = n % 10;
    int first = n / 100;        
    int mid = (n / 10) % 10; 
    int sum = first + mid + last;
    int revers = last * 100 + mid * 10 + first;

    printf("\nПоследняя цифра: %d \nПервая: %d \nСумма цифр: %d \nЧисло наоборот: %d\n",
        last, first, sum, revers);
    return 0;
}

int main() {
    setlocale(LC_ALL, "RUS");
    task1();
    task1a();
    task1b();
    task1B();
    task2();
    task3();
    return 0;
}
