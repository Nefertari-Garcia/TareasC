#include<stdio.h>
#include<conio.h>

int main(){
    int num, suma=0, prod=1;
    while (suma <= 50 && prod <= 150)
    {
        printf("\n Dame un numero entero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            suma=suma+num;
            printf("  Suma actual: %d\n",suma);
        }else 
        {
            prod = prod * num;
            printf("  Producto actual: %d\n",prod);
        }
       
    }

    printf("  El producto final es: %d",suma);
    printf(" EL producto final es %d",prod);
    getch();
    return 0;    
    system("pause");
}