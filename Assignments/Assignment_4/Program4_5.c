////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Description   : It is used to check whether a number is divisible by 5
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 11/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue%5==0)
    {
        printf("%d is divisible by 5. ",iValue);
    }
    else
    {
        printf("%d is not divisible by 5.",iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}