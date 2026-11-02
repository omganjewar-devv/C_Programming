#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountFrequencyX(char *str)
{
    int iCount = 0;
    
    while (*str != '\0')
    {
        if( *str >= '0' && *str <= '9' )     
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountFrequencyX(Arr);

    printf("No. of digits in string is : %d\n",iRet);

    return EXIT_SUCCESS;
}


