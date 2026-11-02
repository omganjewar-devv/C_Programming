#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    // this is special scanf , that tell dont stop till \n

    printf("Enter string is : %s\n",Arr);

    return EXIT_SUCCESS;
}
