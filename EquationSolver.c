#include <stdio.h>
#include<conio.h>

int main()
{
    double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
    printf("Enter the values:\n");
    scanf("%lf %lf %lf %lf",&a1,&b1,&c1,&d1);
    scanf("%lf %lf %lf %lf",&a2,&b2,&c2,&d2);
    scanf("%lf %lf %lf %lf",&a3,&b3,&c3,&d3);
    double del= a1*(b2*c3-b3*c2) - b1*(a2*c3-c2*a3) + c1*(a2*b3-a3*b2);
    double delX= d1*(b2*c3-b3*c2) - b1*(d2*c3-d3*c2) + c1*(d2*b3-b2*d3);
    double delY= a1*(d2*c3-d3*c2) - d1*(a2*c3-a3*c2) + c1*(a2*d3-a3*d2);
    double delZ= a1*(b2*d3-b3*d2) - b1*(a2*d3-a3*d2) + d1*(a2*b3-a3*b2);
    if (del!=0)
    {
        printf("So the solutions are:\n\t\tX = %lf\n\t\tY = %lf\n\t\tZ = %lf",(delX/del),(delY/del),(delZ/del));
    }
    else
    {
        if (delX==0 && delY==0 && delZ==0)
        {
            printf("Infinite solutions are there.\n");
        }
        else
        {
            printf("No solution exit.\n");
        }        
    }

    getch();
    
    return 0;
}