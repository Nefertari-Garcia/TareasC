//Algoritmo que calcula y muestra el producto de todos los múltiplos de 7 que se encuentran del 10 al 137.
//Algorithm that calculates and displays the product of all multiples of 7 from 10 to 137.

#include<stdio.h>
#include<conio.h>

int main(){
    int mul=1;

    for (int i = 10; i <= 137; i++)
    {
        if (i % 7 == 0) {  
            mul *= i;      
        }
    }
    printf("El producto de todos los multiplos de 7 entre 10 y 137 es: %d\n", mul);
    system("pause");
    return 0;

}