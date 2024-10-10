#include<stdio.h>
#include<conio.h>

int main(){
    float celsius,convercion;
    printf("Ingresa un grafo celsius: ");
    scanf("%f",&celsius);
    convercion= (celsius * 1,8) + 32;
    printf("En fahrenheit es: %f",convercion);

    return 0;
}