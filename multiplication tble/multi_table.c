#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("enter the number you want the table: \n");
    scanf("%d",&a);
    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d = %d \n",a,i,a*i);
    }
    getch();
    return 0;
}
