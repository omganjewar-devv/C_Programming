#include<stdio.h>
#include<stdlib.h>


typedef unsigned long long ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0 ;
    ULONG iFact = 0;

    for(iCnt = 1 , iFact = 1 ; iCnt <= iNo ; iCnt++)          // iCnt = 1 , iFact = 1   -> we did 2 initializations in loop , this is allowed.
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("enter the number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n",iRet);

    return EXIT_SUCCESS;
}

