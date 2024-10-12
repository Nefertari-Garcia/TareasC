#include<stdio.h>
#include<conio.h>

int main(){
    float cm,metros;

    printf("Cantidad de centímetros a convertir: ");
    scanf("%f",&cm);
    metros = cm/100;
    printf("La conversión en metros es: %f",metros);
    system("pause");
    return 0;
}