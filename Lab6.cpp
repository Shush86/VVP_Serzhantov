#include <stdio.h>
#include <math.h>
int main()
{
//������� 1-3
    int a, b;
    printf("������� a,b: ");
    scanf("%d %d", &a, &b);
    b = a+b;
    a = b-a;
    b = b-a;
    printf("%d %d\n", a, b);
    
    int a1, b1, c1;
    printf("������� a1, b1, c1: ");
    scanf("%d %d %d", &a1, &b1, &c1);
    a1 = a1+b1+c1;
    b1 = a1-(b1+c1);
    c1 = a1-(b1+c1);
    a1 = a1-(b1+c1);
    printf("%d %d %d\n", a1, b1, c1);
    
    int a2, b2, c2;
    printf("������� a2, b2, c2: ");
    scanf("%d %d %d", &a2, &b2, &c2);
    b2 = a2+b2+c2;
    a2 = b2-(a2+c2);
    c2 = b2-(a2+c2);
    b2 = b2-(a2+c2);
    printf("%d %d %d\n\n", a2, b2, c2);
    
//������� 4-5  
    int x1, y1;
    printf("������� x1: ");
    scanf("%d", &x1);
    y1 = 3*pow(x1, 6)-6*pow(x1, 2)-7;
    printf("y1 = %d\n", y1);
    
    int x2, y2;
    printf("������� x2: ");
    scanf("%d", &x2);
    y2 = 4*pow(x2-3, 6)-7*pow(x2-3, 3)+2;
    printf("y2 = %d\n\n", y2);
    
//������� 6-7
        int A, A1, B, B1, C1;
    printf("������� �: ");
    scanf("%d", &A);
    B = A;
    B = B*A;
    B = B*B;
    B = B*B;
    printf("A � 8 ������� = %d\n", B);
    
    printf("������� �1: ");
    scanf("%d", &A1);
    B1 = A1;
    B1 = B1*B1*A1;
    C1 = B1;
    B1 = B1*B1;
    B1 = B1*C1;
    B1 = B1*C1;
    B1 = B1*C1;
    printf("A � 15 ������� = %d\n", B1);
    return 0;
}
