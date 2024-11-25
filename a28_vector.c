#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,vec[5]={3,1,6,4,5},mat[3][4];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mat[i][j]=vec[i]+vec[j]+j;

        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        j=1;
        while (j<5)
        {
            printf("%d\n",mat[i+1][j-i]);
            j+=2;
        }
        
    }getch(); return 0;
    
    
}