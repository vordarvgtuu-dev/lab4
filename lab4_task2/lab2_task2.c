#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
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
    printf("Поскольку переменные изначально типа int, то при делении дробь убирается безвозратно, поэтому даже если засунуть переменную в тип float/double, то дробь не появится(появятся только нули), т.к. число уже посчитано в типе int");
    return 0;
}
