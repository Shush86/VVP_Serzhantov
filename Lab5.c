#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Задание 1
int x1, x2, yI, y2, X, Y;
float L;
    printf("1.Расстояние между точками\n");
    printf("Координаты 1ой точки: ");
    scanf("%d %d", &x1, &yI);
    printf("Координаты 2ой точки: ");
    scanf("%d %d", &x2, &y2);
    
    X = x1 - x2;
    Y = yI - y2;
    L = sqrt(pow(X,2) + pow(Y,2));
    
    printf("L = %f\n\n", L);

// Задание 2
int A, B, C, AC, BC, sum;
    printf("2.Числовая ось-1\n");
    printf("Числа A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);
    
    AC = C - A;
    BC = C - B;
    sum = AC + BC;
    
    printf("Длины и сумма отрезков АС и ВС = %d, %d, %d\n\n", AC, BC, sum);
    
// Задание 3
int A1, B1, C1, A1C1, B1C1, mul;
    printf("3.Числовая ось-2\n");
    printf("Числа A1, B1, C1(>A1 & <B1): ");
    scanf("%d %d %d", &A1, &B1, &C1);
    
    A1C1 = C1 - A1;
    B1C1 = B1 - C1;
    mul = A1C1 * B1C1;
    
    printf("Произведение отрезков А1С1 и В1С1 = %d\n\n", mul);

// Задание 4
int xA, xB, yA, yB, dx, dy, P, S;
    printf("4.Периметр и площадь прямоугольника (A и B - противоположные точки)\n");
    printf("Координаты А: ");
    scanf("%d %d", &xA, &yA);
    printf("Координаты B: ");
    scanf("%d %d", &xB, &yB);
    
    dx = abs(xB - xA); // Длина х (горизонтальной стороны прямоугольника)
    dy = abs(yA - yB); // Длина у (вертикальной стороны прямоугольника)
    P = 2 * (dx + dy);
    S = dx * dy;
    
    printf("\nСторона х = %d\n", dx);
    printf("Сторона у = %d\n", dy);
    printf("P и S = %d, %d\n\n", P, S);
    
// Задание 5
int xD, xE, xF, yD, yE, yF;
int p1, p2, p3, p4, p5, p6;
float DE, EF, DF, p, Sdef;
    printf("5.Площадь треугольника DEF\n");
    printf("Координаты D: ");
    scanf("%d %d", &xD, &yD);
    printf("Координаты E: ");
    scanf("%d %d", &xE, &yE);
    printf("Координаты F: ");
    scanf("%d %d", &xF, &yF);
    
    // Стороны прямоугольника с диаг.DE
    p1 = xD - xE;
    p2 = yD - yE;
    // Стороны прямоугольника с диаг.EF
    p3 = xE - xF;
    p4 = yE - yF;
    // Стороны прямоугольника с диаг.DF
    p5 = xD - xF;
    p6 = yD - yF;
    
    DE = sqrt(pow(p1,2) + pow(p2,2));
    EF = sqrt(pow(p3,2) + pow(p4,2));
    DF = sqrt(pow(p5,2) + pow(p6,2));
    
    p = (DE + EF + DF) / 2; // Полупериметр
    Sdef = sqrt(p * (p - DE) * (p - EF) * (p - DF)); // Формула Герона
    
    printf("\nСтороны треугольника = %f, %f, %f\n", DE, EF, DF);
    printf("Полупериметр = %f\n", p);
    printf("Sdef = %f", Sdef);
    return 0;
}
