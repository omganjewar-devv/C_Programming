// check if given number is perfect number or not 
// perfect number : if sum of all factors of a number = the number   ,, then it is a perfect number 
// ex:-  6 is perfect numeber ,,, 6 = 1,2,3    
// ex:- 28 = 1,2,4,7,14

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt ) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iNo)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;      // default valuse of boolean variable is false

    printf("enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("it is a perfect number \n");
    }
    else
    {
        printf("it is not a perfect numebr.\n");
    }

    return EXIT_SUCCESS;
}


