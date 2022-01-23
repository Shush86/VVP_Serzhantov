#include <stdio.h>
#include <math.h>

int a, b, d, m, n, P, S, V, L;
int Ssum, Sdif, Smul, Spri, Msum, Mdif, Mmul, Mpri;
int main()
{
//Задания 1-3
    printf("Введите значение a: ");
    scanf("%d", &a);
    printf("Введите значение b: ");
    scanf("%d", &b);
    printf("Введите значение d: ");
    scanf("%d", &d);
    
    P = 2*(a+b);
    S = a*b;
    V = (a+b)/2;
    L = 3.14*d;
    
    printf("\nПериметр прямоугольника = %d\n", P);
    printf("Площадь прямоугольника = %d\n", S);
    printf("Среднее арифметическое = %d\n", V);
    printf("Длина окружности = %d\n\n", L);
    
//Задания 4-5
    printf("Введите ненулевое m: ");
    scanf("%d", &m);
    printf("Введите ненулевое n: ");
    scanf("%d", &n);
    
    Ssum = pow(m,2) + pow(n,2);
    Sdif = pow(m,2) - pow(n,2);
    Smul = pow(m,2) * pow(n,2);
    Spri = pow(m,2) / pow(n,2);
    
    Msum = fabs(m) + fabs(n);
    Mdif = fabs(m) - fabs(n);
    Mmul = fabs(m) * fabs(n);
    Mpri = fabs(m) / fabs(n);
    
    printf("Сумма/разность/произведение/частное квадратов a и b = %d, %d, %d, %d\n", Ssum, Sdif, Smul, Spri);
    printf("Сумма/разность/произведение/частное модулей a и b = %d, %d, %d, %d", Msum, Mdif, Mmul, Mpri);
    return 0;
}
