#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i != 0; i /= 10)
    {
        r = i % 10;
        sum = sum + r;
    }
    printf("\nSum of the digits of %d = %d", n, sum);
    getch();

    return 0;
}