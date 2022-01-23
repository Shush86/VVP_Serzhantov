#include <stdio.h>
#define PI 3.14159265

int main()
{
// Задания 1-2
    int deg;
    float rad;
    printf("Введите градусы (0-360): ");
    scanf("%d", &deg);
    rad = deg * (PI / 180);
    printf("%d градус(-а,-ов) = %f радиан(-а,-ов)\n", deg, rad);
    
    printf("Введите радианы (0-6.2831853): ");
    scanf("%f", &rad);
    deg = rad / (PI / 180);
    printf("%f радиан(-а,-ов) = %d градус(-а,-ов)\n\n", rad, deg);

// Задание 3
    float X, a, Y, Z, Z1;
    printf("Сколько кило конфет купил и почём? ");
    scanf("%f %f", &X, &a);
    printf("А сколько бы ты сам хотел купить? ");
    scanf("%f", &Y);
    Z = a/X;
    Z1 = Z*Y;
    printf("Значит, килограмм по %.2f, а %.1f кг. = %.2f рублей(-ль,-ля)\n\n", Z, Y, Z1);

// Задание 4
    int V1, V2, S, S1, t;
    printf("Введите скорости автомобилей (км/ч, V1>V2), расстояние между ними (км) и время (ч): ");
    scanf("%d %d %d %d", &V1, &V2, &S, &t);
    S1 = (V1*t - V2*t)+S;
    printf("Расстояние между автомобилями через %dч. = %dкм.\n\n", t, S1);

// Задание 5-6
    float A, B, x;
    printf("A*x + B = 0\n");
    printf("Введите коэффициенты A(!=0) и B: ");
    scanf("%f %f", &A, &B);
    x = -B/A;
    printf("x = %.2f\n\n", x);

    int A1, B1, C1, A2, B2, C2;
    int det, x1, y1;

    printf("A1*x1 + B1*x1 = C1\n");
    printf("A2*x1 + B2*x1 = C2\n");
    
    printf("Введите коэффициенты уравнений:\n");
    scanf("%d %d %d\n", &A1,&B1,&C1);
    scanf("%d %d %d", &A2,&B2,&C2);
    
    det=A1*B2-B1*A2; // определитель матрицы 2-го порядка
    
    x1=(C1*B2-B1*C2)/det;
    y1=(A1*C2-C1*A2)/det;
    
    printf("x1 = %d; y1 = %d", x1, y1);
    return 0;
}
