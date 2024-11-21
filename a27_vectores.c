#include<stdio.h>

int main(){
    int a[10],j[10],m[10],i;
    //scand(time(NULL));
    printf("Ingresa los primeros numeros del primer vector\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&m[i]);
    }
    printf("Ingresa los primeros numeros del segundo vector\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&j[i]);
    }
    
    
    for (i=0 ; i<10 ; i++){
        a[i]=m[i]*j[i];
    }
    
    printf("Todos los elementos multiplicados son:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
