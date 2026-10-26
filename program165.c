// input = 8967 
// output => odd : 7 , 9    even : 6 , 8
#include <stdio.h>
#include <stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)         // condition for even 
        {
            printf("Even : %d\n",iDigit);
        }
        else if (iDigit % 2 == 1)   // condition for odd
        {
            printf("Odd  : %d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}
