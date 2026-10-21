#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("numebr is even bete..");
    }
    else
    {
        printf("number is odd...");
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}