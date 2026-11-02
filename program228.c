#include<stdio.h>
#include<stdlib.h>

int main()
{

    char Arr[100] = {'G','A','N','P','A','T','I'};       // '\0' indicates end of string , while initializeg using {} writing \0 is compulsory . 

    printf("%s\n",Arr);

    printf("Size of array is : %d\n",sizeof(Arr));

    return EXIT_SUCCESS;
}