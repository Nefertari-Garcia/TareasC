#include<stdio.h>
#include<conio.h>

int main(){
    int num,limit=0,res;
    printf("Dime un nuemro para multiplicar: ");
    scanf("%d", &num);

    while (limit<=10)
    {
        res=num * limit;
        printf("%d x %d = %d\n",num,limit,res);
        limit++;
    }

}