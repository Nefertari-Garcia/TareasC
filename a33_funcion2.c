#include<stdio.h>

float f2(float m,float n);
float f3(float x);
float f1(float a, float b);

float f3(float x){
    float i, z=1;
    for ( i = 1; i <= x; i++)
    {
        printf("Valor 2: %f\n",z); 
        z=z*i;
    }
    return(z);
}

float f1(float a, float b)
{
    float z;
    z=f2(a,b)/4;
    return(z);
}


int main(){

    float x,y=3;
    int z=2;
    for ( x = 2; x < 5; x=x+2)
    {
        printf("Valor 1: %f\n", f1(x,y));
        f3(z);
    }
}

float f2(float m,float n){
    if (m>n)
    {
        return(m+n);
    }else{
        return(m*n);
    }
    
}
