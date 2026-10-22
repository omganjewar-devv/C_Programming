////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description   : It is used to check whether a number is even or odd
//  Input         : Integer
//  Output        : BOOL (Integer)
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    // Logic
    if (iNo%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == 1)
    {
        printf("Number is even.");
    }
    else 
    {
        printf("number is odd.");
    }

    return 0;
}