////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print a given number of * characters
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Write Updater
    while(iCnt <= iNo)
    {
        printf(" * ");
        iCnt++ ;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}