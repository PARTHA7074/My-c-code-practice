#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int main()
{
    char name[15];
    int n[3], c[3];
    int a = 0, b = 0;

    printf("Enter your name: ");
    gets(name);
    printf("Chose any thing from the list:\n1. Rock\n2. Paper\n3. Scissors\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s's turn: ", name);
        scanf("%d", &n[i]);
        getchar();
        srand(time(NULL));
        c[i] = rand() % 3;
        if (c[i] == 0)
        {
            printf("computer's turn: 1.Rock\n\n");
            if (n[i]==1)
            {
                printf("### No one gets the point ###\n");
            }            
            if (n[i] == 2)
            {
                a += 1;
                printf("### Point goes to %s ###\n", name);
            }
            if (n[i] == 3)
            {
                b += 1;
                printf("### Point goes to computer ### \n");
            }
        }
        if (c[i] == 1)
        {
            printf("computer's turn: 2.Paper\n\n");
            if (n[i]==2)
            {
                printf("### No one gets the point ###\n");
            }
            if (n[i] == 1)
            {
                b += 1;
                printf("### Point goes to computer ###\n");
            }
            if (n[i] == 3)
            {
                a += 1;
                printf("### Point goes to %s ###\n", name);
            }
        }
        if (c[i] == 2)
        {
            printf("computer's turn: 3.Scissors\n\n");
            if (n[i]==3)
            {
                printf("### No one gets the point ###\n");
            }
            if (n[i] == 1)
            {
                a += 1;
                printf("### Point goes to %s ###\n", name);
            }
            if (n[i] == 2)
            {
                b += 1;
                printf("### Point goes to computer ###\n");
            }
        }
        printf("%s's score : %d\nComputer's score: %d\n\n", name, a, b);
    }
    if (a > b)
    {
        printf("The winer is: %s", name);
    }
    else if (b > a)
    {
        printf("The winer is: Computer");
    }
    else
    {
        printf("The match is draw");
    }

    getch();

    return 0;
}