#include <stdio.h>
#include<conio.h>

int main()
{
    system("cls");
    int n, swap;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is:\narr[] = {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i<n-1)
        {
            printf(",");
        }
    }
    printf("};\n");
    for (int i = 0; i < n/2; i++)
    {
        swap = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = swap;
    }
    printf("\nAfter rversal the array is:\narr[] = {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i<n-1)
        {
            printf(",");
        }
        
    }
    printf("};");
    getch();

    return 0;
}