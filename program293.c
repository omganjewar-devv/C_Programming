#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 14;
    int No2 = 11;

    int Ans = 0;

    Ans = No1 | No2;        // here | is bitwise operator (or)     ,,,,,, || is logical operator (or or)

    printf("%d\n",Ans);

    return EXIT_SUCCESS;
}