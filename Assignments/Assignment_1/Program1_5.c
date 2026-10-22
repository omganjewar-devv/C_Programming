////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : It is used to print a given number of * characters
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt=1 ; iCnt<= iNo ; iCnt++ )
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return 0;
}
