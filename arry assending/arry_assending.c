#include <stdio.h>
#include<conio.h>

int main()
{
    int count=0;
    int n, swap;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                count++;
            }
        }
    }
    printf("\nThe array in ascending order is:\narr[] = {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
         {
             printf(",");
         }           
    }
    printf("};");
    printf("\nNumber of swapping = %d",count);
    getch();

    return 0;
}