#include<stdio.h>
#include<conio.h>

int main()
{

    char lettM,lettm;
    printf("Letters of the alphabet are capitalised:\n");
    for (lettM='A',lettm='a'; lettm <= 'z'; lettM++,lettm++)
    {
        printf("%c%c\t",lettM,lettm);
    }
    
getch();
return 0;
}
