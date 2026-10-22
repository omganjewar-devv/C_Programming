////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to display the first number a specified number of times
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display( int iNo, int iFrequency)
{
    int i = 0;

    // Write Updater

    for( i = 1 ; i <= iFrequency ; i++ )
    {
        printf("%d", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    printf("Enter frequency");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}