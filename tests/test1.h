#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(dTest1, bolshe_nulya) {
    float a = 1, b = 4, c = 3;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), 2);
    ASSERT_EQ(x1, -1);
    ASSERT_EQ(x2, -3);
}

TEST(dTest2, raven_nulyu) {
    float a = 16, b = -8, c = 1;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), 1);
    ASSERT_NEAR(x1, 0.25, 0.001); //Погрешность добавил по той причине, что в main.c у меня выводится число с точностью до двух знаков после запятой
}

TEST(dTest3, menche_nulya) {
    float a = 9, b = -6, c = 2;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), 0);
}

TEST(dTest4, a_raven_0) {
    float a = 0, b = -6, c = 2;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), -1);
}

TEST(dTest5, b_raven_0) {
    float a = 2, b = 0, c = -24;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), 2);
    ASSERT_NEAR(x1, 3.46, 0.1); //Погрешность добавил по той причине, что в main.c у меня выводится число с точностью до двух знаков после запятой
    ASSERT_NEAR(x2, -3.46, 0.1);
}

TEST(dTest6, b_c_ravni_0) {
    float a = 1, b = 0, c = 0;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), -2);
}

TEST(dTest7, c_raven_0) {
    float a = 2, b = -6, c = 0;
    float x1, x2;
    ASSERT_EQ(solve_quadratic(a, b, c, &x1, &x2), -3);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, 3);
}
#endif
