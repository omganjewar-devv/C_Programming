#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if((iNo%5) == 0)
    {
        printf("the number is divisible by 5.\n");
    }
    else{
        printf("the number is not divisible by 5.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
