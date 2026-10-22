////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description   : It is used to print even numbers up to the given number
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        return;
    }
    
    for ( i = 2 ; i <= (iNo*2) ; i = i+2)
    {
        printf("%d\t",i);
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}