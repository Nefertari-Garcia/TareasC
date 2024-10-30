#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a=2;
    int b=10;

    printf("%d == %d: %d", a, b, a == b);
    printf("\n%d != %d: %d", a, b, a != b);
    printf("\n%d > %d: %d", a, b, a > b);
    printf("\n%d < %d: %d", a, b, a < b);
    printf("\n%d >= %d: %d", a, b, a >= b);
    printf("\n%d <= %d: %d", a, b, a <= b);
    getch();
    return 0;
}