// program to find greatest of three number entered by user.
#include <stdio.h>
int main()
{
    float a,b,c;
    printf(" Enter the number1 = ");
    scanf("%f", &a);
    printf("\n Enter the number2 = ");
    scanf("%f", &b);
    printf("\n Enter the number3 = ");
    scanf("%f", &c);
    if (a >= b && b >= c)
    {
        printf("\n %f is the largest number.\n", a);
    }
    if (b >= a && b >= c)
    {
        printf("\n %f is the largest number.\n", b);
    }
    if (c >= a && c >= b)
    {
        printf("\n %f is the largest number.\n", c);
    }
    return 0;
}

// we are not able to do a is greatesr and b is smallest and c is medium .  - wrong output
