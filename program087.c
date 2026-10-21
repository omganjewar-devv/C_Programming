
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if(((iNo%3) == 0))            // here we have give safe brackets , so this program wont give any error on any compiler
    {
        if (((iNo%5) == 0))
        {
            printf("the number is divisible by 3 & 5.\n");
        }
        else
        {
            printf("the number is not divisible by 3 & 5.\n");
        }   
    }
    else
    {
        printf("the number is not divisible by 3 & 5.\n");
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


