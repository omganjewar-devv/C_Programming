#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    printf("%s\n",str);
}


int main()
{
    char Arr[] = "Ganpati";

    Display(Arr);

    return EXIT_SUCCESS;
}