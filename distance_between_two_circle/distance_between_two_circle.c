#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float a1,b1,r1,a2,b2,r2;
    printf("If the coordinates of the center of the circle is (x,y) and radius is r: Then give the input like x,y,r \n");
    printf("Enter the details of circle-1:\t");
    scanf("%f,%f,%f", &a1,&b1,&r1);
    printf("Enter the details of circle-2:\t");
    scanf("%f,%f,%f", &a2,&b2,&r2);
    float distance = sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
    printf("The distance between the ceneter of the two circle is : %f",distance);
    getch();
    return 0;
}
