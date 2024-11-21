#include<stdio.h>
#include<conio.h>
#include <math.h>

int main(){
    int i,A[5];
    for (i=4; i>=0; i=i-1){
        A[i]=3+i*i+12/4;
    }
    for (i = 0; i < 5; i=i+1)
    {
        printf("%d",A[i]);
    }
    

}