#include <stdio.h>

int main()
{
    int n, temp,temp2;
    int gcd;
    printf("Enter how many number you want to take: ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number at position %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int k = 0; k < n - 1; k++)
    {
        if (k == 0)
        {
            temp = num[0];
        }
        if (temp>num[k+1])
        {
            temp2 = temp;
        }
        else
        {
            temp2 = num[k+1];
        }
        
        
        for (int i = 1; i < temp2; i++)
        {
            if (temp % i == 0 && num[k + 1] % i == 0)
            {
                gcd = i;
            }
        }
        temp = gcd;
    }

    printf("\nThe result is: %d",gcd);

    return 0;
}