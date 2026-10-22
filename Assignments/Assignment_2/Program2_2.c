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
    // Write Updater
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}