////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print numbers from 5 to 1
//  Input         : None
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;

    i = 5;

    while( i >= 0 )
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
