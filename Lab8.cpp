#include <stdio.h>

int main()
{
// Задание 1
    int byte, KB;
    printf("Размер файла (байт): ");
    scanf("%d", &byte);
    KB = byte/1024;
    printf("Размер файла (КБ): %d\n\n", KB);
    
// Задания 2-3
    int A, B, maxB;
    printf("Введите положительные A и B (A>B): ");
    scanf("%d %d", &A, &B);
    maxB = A/B;
    printf("max кол-во отрезков B на отрезке A: %d\n\n", maxB);
    
    int A1, B1, freeA;
    printf("Введите положительные A1 и B1 (A1>B1): ");
    scanf("%d %d", &A1, &B1);
    freeA = A1-(A1/B1)*B1;
    printf("Незанятая часть отрезка A: %d\n\n", freeA);

// Задания 4-5
    int a, b, sum;
    printf("Введите двузначное число: ");
    scanf("%1d %1d", &a,&b);
    sum=a+b;
    b = sum-b;
    a = sum-a;
    printf("Полученное число: %d%d\n\n", a,b);

    int a1, b1, c1, sum1;
    printf("Введите трёхзначное число: ");
    scanf("%1d %1d %1d", &a1,&b1,&c1);
    sum1=a1+b1+c1;
    c1 = sum1-(b1+c1);
    b1 = sum1-(b1+c1);
    a1 = sum1-(b1+c1);
    printf("Полученное число: %d%d%d", a1,b1,c1);
    return 0;
}
