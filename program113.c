#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
        }
    }

    return bFlag;
    
}

int main(void)      
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    //if(bRet == true)
    if(bRet)               // it is ok if we dont write == true , it has same meaning.
    {
       printf("it is prime number ");
    }
    else
    {
        printf("it is not prime number ");
    }

    return EXIT_SUCCESS;
}


