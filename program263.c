//$   %   &   #   *

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0 , iCountCapital = 0 , iCountDigit = 0 , iCountSpecial = 0;

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
        else 
        {
            iCountSpecial++;
        }
        str++;
    }
    printf("small characters   : %d\n",iCountSmall);
    printf("capital characters : %d\n",iCountCapital);
    printf("numeric characters : %d\n",iCountDigit);
    printf("special characters : %d\n",iCountSpecial);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}
