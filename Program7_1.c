// write a program which accept number from user nd print that number of $ & *on screen 
// Input : 3
// Output:  $   *   $   *   $   *   

#include<stdio.h>

void Pattern(int no)
{
    int X = 0;

    for(X = 1; X <= no; X++)
    {
        printf("$\t*\t");
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