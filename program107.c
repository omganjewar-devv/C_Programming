#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == 1)
    {
        printf("it is prime number ");
    }
    else
    {
        printf("it is not prime number ");
    }
}

int main(void)      // writing vois here is optional , it shows that main function is not going to take any input.
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}