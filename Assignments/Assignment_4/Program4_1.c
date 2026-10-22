////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : It is used to check whether a number is positive, negative, or zero
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 26
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("number is positive.");
    }
    else
    {
        printf("number is negative.");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}