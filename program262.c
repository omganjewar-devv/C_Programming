//$   %   &   #   *

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0 , iCountCapital = 0 , iCountDigit = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;
        }
        str++;
    }
    printf("small characters   : %d\n",iCountSmall);
    printf("capital characters : %d\n",iCountCapital);
    printf("numeric characters : %d\n",iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}
