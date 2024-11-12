#include<stdio.h>
#include<conio.h>

int main()
{

    char lett;
    printf("Letters of the alphabet are capitalised:\n");
    for (lett='A'; lett <= 'Z'; lett++)
    {
        printf("%c\t",lett);
    }
    
getch();
return 0;
}
