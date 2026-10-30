// write a program which accept number from user and print odd numbers upto it
// Input : 5
// Output:  1 3 5

#include<stdio.h>

void Pattern(int no)
{
    int X = 0;

    for(X = 1; X <= no; X=X+2)
    {
        printf("%d\t",X);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}