#include <stdio.h>
#define PI 3.14159265

int main()
{
// ������� 1-2
    int deg;
    float rad;
    printf("������� ������� (0-360): ");
    scanf("%d", &deg);
    rad = deg * (PI / 180);
    printf("%d ������(-�,-��) = %f ������(-�,-��)\n", deg, rad);
    
    printf("������� ������� (0-6.2831853): ");
    scanf("%f", &rad);
    deg = rad / (PI / 180);
    printf("%f ������(-�,-��) = %d ������(-�,-��)\n\n", rad, deg);

// ������� 3
    float X, a, Y, Z, Z1;
    printf("������� ���� ������ ����� � �����? ");
    scanf("%f %f", &X, &a);
    printf("� ������� �� �� ��� ����� ������? ");
    scanf("%f", &Y);
    Z = a/X;
    Z1 = Z*Y;
    printf("������, ��������� �� %.2f, � %.1f ��. = %.2f ������(-��,-��)\n\n", Z, Y, Z1);

// ������� 4
    int V1, V2, S, S1, t;
    printf("������� �������� ����������� (��/�, V1>V2), ���������� ����� ���� (��) � ����� (�): ");
    scanf("%d %d %d %d", &V1, &V2, &S, &t);
    S1 = (V1*t - V2*t)+S;
    printf("���������� ����� ������������ ����� %d�. = %d��.\n\n", t, S1);

// ������� 5-6
    float A, B, x;
    printf("A*x + B = 0\n");
    printf("������� ������������ A(!=0) � B: ");
    scanf("%f %f", &A, &B);
    x = -B/A;
    printf("x = %.2f\n\n", x);

    int A1, B1, C1, A2, B2, C2;
    int det, x1, y1;

    printf("A1*x1 + B1*x1 = C1\n");
    printf("A2*x1 + B2*x1 = C2\n");
    
    printf("������� ������������ ���������:\n");
    scanf("%d %d %d\n", &A1,&B1,&C1);
    scanf("%d %d %d", &A2,&B2,&C2);
    
    det=A1*B2-B1*A2; // ������������ ������� 2-�� �������
    
    x1=(C1*B2-B1*C2)/det;
    y1=(A1*C2-C1*A2)/det;
    
    printf("x1 = %d; y1 = %d", x1, y1);
    return 0;
}
