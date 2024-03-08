#include <stdio.h>
#include "myfunc.h"

int main() {
    float a, b, c;
    float x1, x2;
    int num_roots;

    // Ввод коэффициентов
    printf("Введите коэффициенты квадратного уравнения (a, b, c): ");
    if (scanf("%f %f %f", &a, &b, &c)) {}

    // Вызов функции для решения уравнения
    num_roots = solve_quadratic(a, b, c, &x1, &x2);

    // Вывод результатов
    if (num_roots == 2) {
        printf("Корни уравнения: %.2f и %.2f\n", x1, x2);
    } else if (num_roots == 1) {
        printf("Уравнение имеет один корень: %.2f\n", x1);
    } else if (num_roots == -1) {
        printf("Error\n");
    } else if (num_roots == -2) {
        printf("Уравнение будет равно нулю\n");
    } else if (num_roots == -3) {
        printf("Корни уравнения: %.2f и %.2f\n", x1, x2);
    } else {
        printf("Уравнение не имеет действительных корней (Не является кв. ур.).\n");
    }

    return 0;
}
