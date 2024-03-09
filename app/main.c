#include <stdio.h>
#include "myfunc.h"

int main() {
    float a, b, c;
    float x1, x2;
    int num_roots;

    // Ввод коэффициентов
    printf("Введите коэффициенты квадратного уравнения (a, b, c): ");
    if (scanf("%f %f %f", &a, &b, &c) == 3) {
        // Все три коэффициента были успешно считаны

        // Вызов функции для решения уравнения
        num_roots = solve_quadratic(a, b, c, &x1, &x2);

        // Вывод результатов
        if (num_roots == 2) {
            printf("Корни уравнения: %.2f и %.2f\n", x1, x2);
        } else if (num_roots == 1) {
            printf("Уравнение имеет один корень: %.2f\n", x1);
        } else if (num_roots == 0) {
            printf("Уравнение не имеет действительных корней (Не является кв. ур.).\n");
        } else if (num_roots == -1) {
            printf("Ошибка вычисления корней\n");
        } else if (num_roots == -2) {
            printf("Уравнение будет равно нулю\n");
        } else {
            printf("Неизвестная ошибка\n");
        }
    } else {
        printf("Ошибка при вводе коэффициентов.\n");
    }

    return 0;
}
