#include <stdio.h>

int main()
{
    int n, min, max;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("\nMaximum element of the array is: %d", max);
    printf("\nMinimum element of the array is: %d", min);

    return 0;
}