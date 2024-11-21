#include<stdio.h>
#include<conio.h>

main(){
    float y=2,x=2,z=3;
    while (z<25||x<10)
    {
        if (z<7)
        {
            z=z+2;
        }else{
            y=2*y-2;
            z=z+y;
            x=y+z;
        }
        y=z/2;
        printf("%f %f%f\n",x,y,z);
    }
    getch();
    return 0;
    
}