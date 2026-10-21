// input : 4
// expected output :     1  2   3   4

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    
    int iValue = 0;
    printf("enter the no. of times you want to print : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
