////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : It is used to check whether a number is even or odd
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 26
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue%2==0)
    {
        printf("number is even.");
    }
    else
    {
        printf("number is odd.");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}