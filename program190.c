/*
    Input  : 4
    Output : -4 -3  -2  -1  0   1   2   3   
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    
    for(iCnt = -iNo ; iCnt <= 0 ; iCnt++) // time complecity -> O(N)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++) // time complecity -> O(N)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}
// total time complecity -> 2(N)

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
