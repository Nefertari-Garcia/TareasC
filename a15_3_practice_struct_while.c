#include<stdio.h>
#include<conio.h>

int main(){
    int num,suma =0;
    while (suma<=150)
    {
        printf(" Dame un numero entero");
        scanf("%d",&num);
        suma = suma + num;
    }
    printf("  La suma es: %d\n", suma);
    getch();
    return 0;
    system("pause");
}