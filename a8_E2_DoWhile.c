#include<stdio.h>
#include<conio.h>

int main(){
    int x=1,n=1;
    do
    {   x=n*(n+1)/2;
        printf("\nLa suma de 1 a %d es: %d\n",n,x);
        n++;
    } while (n<=200);
    return 0;
    

}