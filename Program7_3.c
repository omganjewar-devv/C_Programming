// write a program which accept number from user and print its number line 
// Input : 3
// Output:  -3 -2 -1 0 1 2 3  

#include<stdio.h>

void Pattern(int no)
{
    int X = -no;

    for(X = 1; X <= no; X++)
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