#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int divident, divisor, remainder, GCD, LCM, x, y;

    printf("Please Enter Largest Number = ");
    scanf("%d",&divident);
    printf("Please Enter Smallest Number = ");
    scanf("%d",&divisor);

    x=divident; y=divisor;

    while(divisor!=0)
    {
        remainder=divident%divisor;
        divident=divisor;
        divisor=remainder;
    }
    GCD=divident;

    LCM=(x*y)/GCD;

    printf("LCM(Least Common Multiple)= %d",LCM);



    getch();
    return 0;
}
