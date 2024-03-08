#include <math.h>
#include "myfunc.h"

// Определение функции для вычисления корней квадратного уравнения
int solve_quadratic(float a, float b, float c, float *x1, float *x2) {
    float discriminant;

    // Проверка, что a не равно нулю
    if (a == 0) {
        return -1; // Отсутствие а
    }

    if (b == 0 && c == 0) {
        return -2; // Проверка на отсутствие a и b
    }

    if (c == 0) {
    //Когда с нет
        *x1 = 0;
        *x2 = -b / a;
        return -3;
    }
    // Вычисление дискриминанта
    discriminant = b * b - 4 * a * c;

    // Проверка знака дискриминанта
    if (discriminant > 0) {
        // Два действительных корня
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
        return 2;
    } else if (discriminant == 0) {
        // Один действительный корень
        *x1 = -b / (2 * a);
        return 1;
    } else {
        // Два комплексных корня
        return 0;
    }
}
