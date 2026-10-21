#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if((iNo%3) == 0)
    {
        printf("the number is divisible by 3.\n");
    }
    else{
        printf("the number is not divisible by 3.\n");
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
