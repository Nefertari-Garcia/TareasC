#include<stdio.h>
#include<conio.h>

int main(){
    int regalo=10,edadN=12,operacion=10;
    do
    {
        printf("\nLa edad de la nina es %d y el dinero que tiene es %d y el total que tiene %d",edadN,regalo,operacion);
        edadN++;
        regalo = regalo*2;
        operacion = regalo+operacion;

    } while (regalo<=1000); 
    return 0;
}