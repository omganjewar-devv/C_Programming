// check if given number is perfect number or not 
// perfect number : if sum of all factors of a number = the number   ,, then it is a perfect number 
// ex:-  6 is perfect numeber ,,, 6 = 1,2,3    
// ex:- 28 = 1,2,4,7,14

#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
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
        printf("perfect number. ");
    }
    else 
    {
        printf("not a perfect number. ");
    }
}

int main()
{
    int iValue = 0 ;

    printf("enter the number : \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}


