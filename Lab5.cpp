#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// ������� 1
int x1, x2, yI, y2, X, Y;
float L;
    printf("1.���������� ����� �������\n");
    printf("���������� 1�� �����: ");
    scanf("%d %d", &x1, &yI);
    printf("���������� 2�� �����: ");
    scanf("%d %d", &x2, &y2);
    
    X = x1 - x2;
    Y = yI - y2;
    L = sqrt(pow(X,2) + pow(Y,2));
    
    printf("L = %f\n\n", L);

// ������� 2
int A, B, C, AC, BC, sum;
    printf("2.�������� ���-1\n");
    printf("����� A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);
    
    AC = C - A;
    BC = C - B;
    sum = AC + BC;
    
    printf("����� � ����� �������� �� � �� = %d, %d, %d\n\n", AC, BC, sum);
    
// ������� 3
int A1, B1, C1, A1C1, B1C1, mul;
    printf("3.�������� ���-2\n");
    printf("����� A1, B1, C1(>A1 & <B1): ");
    scanf("%d %d %d", &A1, &B1, &C1);
    
    A1C1 = C1 - A1;
    B1C1 = B1 - C1;
    mul = A1C1 * B1C1;
    
    printf("������������ �������� �1�1 � �1�1 = %d\n\n", mul);

// ������� 4
int xA, xB, yA, yB, dx, dy, P, S;
    printf("4.�������� � ������� �������������� (A � B - ��������������� �����)\n");
    printf("���������� �: ");
    scanf("%d %d", &xA, &yA);
    printf("���������� B: ");
    scanf("%d %d", &xB, &yB);
    
    dx = abs(xB - xA); // ����� � (�������������� ������� ��������������)
    dy = abs(yA - yB); // ����� � (������������ ������� ��������������)
    P = 2 * (dx + dy);
    S = dx * dy;
    
    printf("\n������� � = %d\n", dx);
    printf("������� � = %d\n", dy);
    printf("P � S = %d, %d\n\n", P, S);
    
// ������� 5
int xD, xE, xF, yD, yE, yF;
int p1, p2, p3, p4, p5, p6;
float DE, EF, DF, p, Sdef;
    printf("5.������� ������������ DEF\n");
    printf("���������� D: ");
    scanf("%d %d", &xD, &yD);
    printf("���������� E: ");
    scanf("%d %d", &xE, &yE);
    printf("���������� F: ");
    scanf("%d %d", &xF, &yF);
    
    // ������� �������������� � ����.DE
    p1 = xD - xE;
    p2 = yD - yE;
    // ������� �������������� � ����.EF
    p3 = xE - xF;
    p4 = yE - yF;
    // ������� �������������� � ����.DF
    p5 = xD - xF;
    p6 = yD - yF;
    
    DE = sqrt(pow(p1,2) + pow(p2,2));
    EF = sqrt(pow(p3,2) + pow(p4,2));
    DF = sqrt(pow(p5,2) + pow(p6,2));
    
    p = (DE + EF + DF) / 2; // ������������
    Sdef = sqrt(p * (p - DE) * (p - EF) * (p - DF)); // ������� ������
    
    printf("\n������� ������������ = %f, %f, %f\n", DE, EF, DF);
    printf("������������ = %f\n", p);
    printf("Sdef = %f", Sdef);
    return 0;
}
