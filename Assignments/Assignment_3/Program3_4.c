////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : It is used to convert the case of a character
//  Input         : Character
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 21 / 10 / 26
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}