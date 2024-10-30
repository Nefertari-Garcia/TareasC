#include<stdio.h>
#include<conio.h>

int main(){
    int num1,num2,suma;

    printf(" Dame el primer numero:     ");
    scanf("%d", &num1);
    printf(" Dame el segundo numero:    ");
    scanf("%d", &num2);

    suma = num1 + num2;
    printf(" El resultado de la suma es: %d", suma);

    getch();
    return 0;

}