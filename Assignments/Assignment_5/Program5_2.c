////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description   : It is used to check whether a year is a leap year or not
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear%4 == 0)
    {
        printf("this is a leap year . ");
    }
    else
    {
        printf("this is not a leap year . ");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}