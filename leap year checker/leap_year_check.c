#include <stdio.h>
int pgrm_repeter();

int is_leap()
{
    int year;
    printf("\nEnter the year which you want to check if leap year or not: ");
    scanf("%d", &year);
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        printf("\n%d is a leap year", year);
    }
    else
    {
        printf("\n%d is not a leap year", year);
    } 
    pgrm_repeter();
}

int pgrm_repeter()
{
    char run;
    printf("\n\nDo you want to run the leap year checking programme again ?(Y/N): ");
    scanf("%s", &run);
    if (run == 'N' || run == 'n')
    {
        return 0;
    }
    else if (run == 'Y' || run == 'y')
    {
        is_leap();
    }
    else
    {
        printf("\n~~You have entered a wrong character, please enter 'Y' or 'N'~~");
        pgrm_repeter();
    }
}

int main()
{
    is_leap();
    return 0;
}
