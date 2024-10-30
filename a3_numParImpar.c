#include<stdio.h>
#include<conio.h>

int main(){
    int parIm;
    printf("Buen dia, ingresa un numero para descubrir si un numero es par o impar: ");
    scanf("%d",&parIm);

     if(parIm%2==0){
            printf("Es par");

    }else{
            printf("Es impar");
    }
}
