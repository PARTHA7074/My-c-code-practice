# include <stdio.h>
int main()
{
    float sum=0,avg,a[30],n;
    printf("\nEnter how many number you want to take for average: ");
    scanf("%f",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the number %d: ",i+1);
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\nAverage of the numbers=%f",avg);
    return 0;
}