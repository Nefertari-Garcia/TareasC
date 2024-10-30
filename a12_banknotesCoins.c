#include<stdio.h>
#include<conio.h>

int main(){
    int cantidad;
    printf(" Introduce la cantidad en pesos: ");
    scanf("%d", &cantidad);
    printf("\n La cantidad %d equivale a: \n", cantidad);
    printf(" %d billete(s) de 1000 pesos\n", cantidad/1000);
    cantidad = cantidad % 1000;
    printf(" %d billete(s) de 500 pesos\n", cantidad/500);
    cantidad = cantidad % 500;
    printf(" %d billete(s) de 200 pesos\n", cantidad/200);
    cantidad = cantidad % 200;
    printf(" %d billete(s) de 100 pesos\n", cantidad/100);
    cantidad = cantidad % 100;
    printf(" %d billete(s) de 50 pesos\n", cantidad/50);
    cantidad = cantidad % 50;
    printf(" %d billete(s) de 20 pesos\n", cantidad/20);
    cantidad = cantidad % 20;
    printf(" %d moneda(s) de 10 pesos\n", cantidad/10);
    cantidad = cantidad % 10;
    printf(" %d moneda(s) de 5 pesos\n", cantidad/5);
    cantidad = cantidad % 5;
    printf(" %d moneda(s) de 1 pesos\n", cantidad/1);
    cantidad = cantidad % 1;
    getch();
    return 0;
}
