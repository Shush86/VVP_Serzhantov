#include <stdio.h>

int main()
{
// ������� 1
    int byte, KB;
    printf("������ ����� (����): ");
    scanf("%d", &byte);
    KB = byte/1024;
    printf("������ ����� (��): %d\n\n", KB);
    
// ������� 2-3
    int A, B, maxB;
    printf("������� ������������� A � B (A>B): ");
    scanf("%d %d", &A, &B);
    maxB = A/B;
    printf("max ���-�� �������� B �� ������� A: %d\n\n", maxB);
    
    int A1, B1, freeA;
    printf("������� ������������� A1 � B1 (A1>B1): ");
    scanf("%d %d", &A1, &B1);
    freeA = A1-(A1/B1)*B1;
    printf("��������� ����� ������� A: %d\n\n", freeA);

// ������� 4-5
    int a, b, sum;
    printf("������� ���������� �����: ");
    scanf("%1d %1d", &a,&b);
    sum=a+b;
    b = sum-b;
    a = sum-a;
    printf("���������� �����: %d%d\n\n", a,b);

    int a1, b1, c1, sum1;
    printf("������� ���������� �����: ");
    scanf("%1d %1d %1d", &a1,&b1,&c1);
    sum1=a1+b1+c1;
    c1 = sum1-(b1+c1);
    b1 = sum1-(b1+c1);
    a1 = sum1-(b1+c1);
    printf("���������� �����: %d%d%d", a1,b1,c1);
    return 0;
}
