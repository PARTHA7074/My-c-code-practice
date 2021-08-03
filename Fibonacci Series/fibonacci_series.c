#include <stdio.h>
#include <conio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, n, i = 1;
    printf("Enter a positive integer:   ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    while (i <= n)
    {
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i ++;
    }
    getch();

    return 0;
}