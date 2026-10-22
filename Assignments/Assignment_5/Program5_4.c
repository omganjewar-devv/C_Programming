////////////////////////////////////////////////////////////
//
//  Function Name : CheckMultipleDivisibility
//  Description   : It is used to check divisibility by 3 and 5
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if (iValue%3 == 0 && iValue%5 == 0)
    {
        printf("divisible by both . ");
    }
    else if (iValue%3 == 0 && iValue%5 != 0)
    {
        printf("divisible by 3 only . ");
    }
    else if (iValue%3 != 0 && iValue%5 == 0)
    {
        printf("divisible by 5 only . ");
    }
    else
    {
        printf("Not divisible by either . ");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");

    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}