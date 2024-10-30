#include<stdio.h>
#include<conio.h>

int main(){
    int var=1,num;
    while (var==1)
    {
        printf("\n Dame un numero entero ");
        scanf("%d", &num);
        printf("  El numero ingresado es: %d\n",num);
        printf("\n Desea continuar 1. Si  2. No:  ");
        scanf("%d",&var);
    }
    printf("Que tenga un buen dia!");
    system("pause");
}