#include<stdio.h>
#include<conio.h>

int main(){
    int var=1,num;
    while (var == 1)
    {
        printf("   Dame un numero entero:   ");
        scanf("%d", &num);
        printf("   El numero ingresado es: %d\n\n",num);
    }
    getch();
    return 0;
    
    system("pause");
}