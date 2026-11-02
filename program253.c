
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countX(char *str)
{
    int iCount = 0;
    
    while (*str != '\0')
    {
        if(*str == 97 || *str == 98 || *str == 99 || *str == 100)     // using ascii values in code is a bad practice.
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

    iRet = countX(Arr);

    printf("No. of a/b/c/d in string is : %d\n",iRet);

    return EXIT_SUCCESS;
}


