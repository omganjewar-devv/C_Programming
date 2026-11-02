#include<stdio.h>
#include<stdlib.h>

int main()
{

    char Arr[100] ;

    Arr[0] = 'G';
    Arr[1] = 'A';
    Arr[2] = 'N';
    Arr[3] = 'P';
    Arr[4] = 'A';
    Arr[5] = 'T';
    Arr[6] = 'I';
    Arr[7] = '\0';    // this is member by member initialization.

    printf("%s\n",Arr);

    printf("Size of array is : %d\n",sizeof(Arr));

    return EXIT_SUCCESS;
}
