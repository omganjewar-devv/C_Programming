#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countSpaceX(char *str)
{
    int iCount = 0;
   

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
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

    iRet = countSpaceX(Arr);

    printf("No. of occurences of a in string is : %d\n",iRet);

    return EXIT_SUCCESS;
}
