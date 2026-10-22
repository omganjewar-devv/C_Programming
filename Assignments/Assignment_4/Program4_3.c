////////////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Description   : It is used to find the greater of two numbers
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22/11/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d is greater than %d",iFirst,iSecond);
    }
    else
    {
        printf("%d is greater than %d",iSecond,iFirst);
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}