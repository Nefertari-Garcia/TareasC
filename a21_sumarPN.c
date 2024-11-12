#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
    int contador, suma = 1; 
    for(contador = 3; contador <= 100; contador++){
        suma = suma + contador; 
    } 
    printf("La suma es : %d", suma); 
    getch();
    return 0; 
} 
