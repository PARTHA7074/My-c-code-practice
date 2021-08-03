#include <stdio.h>

int main()
{
    int num, n, rev, r;
    printf("Enter any number: ");
    scanf("%d", &num);
    rev = 0;
    for (n = num; n > 0; n/=10)
    {
        r=n%10;
        rev=(rev*10)+r;
    }
    if (rev==num)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrom.");
    }

    return 0;
}