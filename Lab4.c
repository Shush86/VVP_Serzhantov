#include <stdio.h>
#include <math.h>

int a, b, d, m, n, P, S, V, L;
int Ssum, Sdif, Smul, Spri, Msum, Mdif, Mmul, Mpri;
int main()
{
//������� 1-3
    printf("������� �������� a: ");
    scanf("%d", &a);
    printf("������� �������� b: ");
    scanf("%d", &b);
    printf("������� �������� d: ");
    scanf("%d", &d);
    
    P = 2*(a+b);
    S = a*b;
    V = (a+b)/2;
    L = 3.14*d;
    
    printf("\n�������� �������������� = %d\n", P);
    printf("������� �������������� = %d\n", S);
    printf("������� �������������� = %d\n", V);
    printf("����� ���������� = %d\n\n", L);
    
//������� 4-5
    printf("������� ��������� m: ");
    scanf("%d", &m);
    printf("������� ��������� n: ");
    scanf("%d", &n);
    
    Ssum = pow(m,2) + pow(n,2);
    Sdif = pow(m,2) - pow(n,2);
    Smul = pow(m,2) * pow(n,2);
    Spri = pow(m,2) / pow(n,2);
    
    Msum = fabs(m) + fabs(n);
    Mdif = fabs(m) - fabs(n);
    Mmul = fabs(m) * fabs(n);
    Mpri = fabs(m) / fabs(n);
    
    printf("�����/��������/������������/������� ��������� a � b = %d, %d, %d, %d\n", Ssum, Sdif, Smul, Spri);
    printf("�����/��������/������������/������� ������� a � b = %d, %d, %d, %d", Msum, Mdif, Mmul, Mpri);
    return 0;
}
