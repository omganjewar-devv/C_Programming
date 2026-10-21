// input : 10
// 4    3    2    1

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt+=2)      // += is shorthand operator
    {
        printf("%d\t",iCnt);               
    }

    printf("\n");
}

int main()
{
    
    int iValue = 0;
    printf("enter the no. : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
