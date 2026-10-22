////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description   : It is used to display even factors of a given number
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo ; i++)
    {
        if(iNo%i==0 && i%2==0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    DisplayEvenFactor (iValue);

    return 0;
}