#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Enter how many rows you want: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++) //For printing space before every row
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) //For printing the row number
        {
            printf("* ");
        }
        printf("\n");
        
    }
    getch();
    
    return 0;
}
