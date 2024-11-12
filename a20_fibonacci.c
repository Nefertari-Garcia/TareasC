#include<stdio.h>
#include<conio.h>

int main()
{
    unsigned long long int n, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%llu", &n);

    printf("The Fibonacci sequence up to the term %llu is:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%llu ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
    system("pause");
}