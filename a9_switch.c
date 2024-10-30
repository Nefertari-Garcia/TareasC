#include<stdio.h>

int main(){
    float precio,operacion,resta;
    int opcion;
    printf("Buen dia, ingresa el precio del producto: ");
    scanf("%f",&precio);
    printf("Buen dia, ingresa el color de la bolita que adquiriste\n");
    printf("1) Verde\n2) Amarilo\n3) Negro \n4) Blanca\n");
    printf("Respuesta: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
        system("cls");
        system("color 20");
        printf("La bolita tiene el descuento de 20\n");
        operacion =(20.0/100)*precio;
        resta =precio-operacion;
        printf("El descuento del producto es: %f",operacion);
        printf("\nEntonces el total del producto es: %f",resta);
        break;
    case 2:
        system("cls");
        system("color 60");
        printf("La bolita tiene el descuento de 25\n");
        operacion =(25.0/100)*precio;
        resta =precio-operacion;
        printf("El descuento del producto es: %f",operacion);
        printf("\nEntonces el total del producto es: %f",resta);
        break;
    case 3:
        system("cls");
        system("color 02");
        printf("La bolita tiene el descuento de 30\n");
        operacion =(30.0/100)*precio;
        resta =precio-operacion;
        printf("El descuento del producto es: %f",operacion);
        printf("\nEntonces el total del producto es: %f",resta);
        break;
    case 4:
        system("cls");
        system("color 70");
        printf("La bolita no tiene el descuento\nQueda en total de %f",precio);

    
    default:
       printf("No ingresaste alguna de las opciones");
    }
    system("pause");

}