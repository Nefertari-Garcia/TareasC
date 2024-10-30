#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    char opcion;
    float operation,litres;
    printf("Enter the following options to convert records to your liking\n a) Litres to microlitres\n b) Litres to millilitres\n c) Litres to centrilitres\n d) Litres to decilitres\n e) Litres to gallon");
    printf("\nSelect:");
    int temp = getchar();
    opcion = (char)temp;
    switch (opcion)
    {
        case 'a': case 'A':
            system("cls");
            printf("How many litres do you want to convert to microl litres? ");
            scanf("%f",&litres);
            operation=litres * 1000000;
            printf("The litres to microl litres is: %f",operation);
            break;

         case 'b': case 'B':
            system("cls");
            printf("How many litres do you want to convert to milliliters? ");
            scanf("%f",&litres);
            operation=litres * 1000;
            printf("The litres to milliliters is: %f",operation);
            break;    
         case 'c': case 'C':
            system("cls");
            printf("How many litres do you want to convert to centiliter? ");
            scanf("%f",&litres);
            operation=litres * 100;
            printf("The litres to centiliter is: %f",operation);
            break;  
         case 'd': case 'D':
            system("cls");
            printf("How many litres do you want to convert to deciliter? ");
            scanf("%f",&litres);
            operation=litres * 10;
            printf("The litres to deciliter is: %f",operation);
            break;
         case 'e': case 'E':
            system("cls");
            printf("How many litres do you want to convert to gallon? ");
            scanf("%f",&litres);
            operation= litres / 3.785411784f;
            printf("The litres to gallon is: %f",operation);
            break;

    default:
        printf("Error, You did not select one of the options");
    }
}