#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 0X3db;         // 0X is prefix of hexadecimal

    printf("%d\n",No);       // should print its decimal value
    printf("%X\n",No);       // should print hexadecimal value (as it is)

    return EXIT_SUCCESS;
}