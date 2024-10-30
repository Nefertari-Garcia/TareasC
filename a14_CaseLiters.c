#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int opcion;
    printf("Enter the following options to convert records to your liking\n a) Litres to microlitres\n b) Litres to millilitres\n c) Litres to centrilitres\n d) Litres to decilitres\n e) Litres to gallon");
    printf("\nSelect:");
    scanf("%d",opcion);
    switch (opcion)
    {
    case 'a': case 'A':
        system("cls");
        printf("How many litres do you want to convert to micro litres? ");
        //scanf
        break;
    
    default:
        printf("Error, You did not select one of the options");
    }
}