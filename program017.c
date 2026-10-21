#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    if((iValue % 2) == 0)
    {
        printf("numebr is even bete..");
    }
    else
    {
        printf("number is odd...");
    }

    return EXIT_SUCCESS;
}