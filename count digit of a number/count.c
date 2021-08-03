#include <stdio.h>
int main()
{
    int n, count =0;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i != 0; i /= 10)
    {
        count++;
    }
    printf("\nThe number of digits in %d = %d", n, count);

    return 0;
}