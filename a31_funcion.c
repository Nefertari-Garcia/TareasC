#include<stdio.h>

void Func_A()
{
    printf("Arabian\n");
}
void Func_B()
{
    printf("Italia\n");
    printf("Chile\n");
}
void Func_C()
{
    printf("Australia\n");
    Func_A();
}
void Func_D()
{
    printf("Colombia\n");
}

int main()
{
    Func_C();
    Func_A();
    Func_D();
    Func_B();
    return 0;
}
