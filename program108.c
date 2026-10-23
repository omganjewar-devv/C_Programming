#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)      // writing vois here is optional , it shows that main function is not going to take any input.
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
       printf("it is prime number ");
    }
    else
    {
        printf("it is not prime number ");
    }

    return EXIT_SUCCESS;
}


