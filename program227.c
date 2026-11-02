#include<stdio.h>
#include<stdlib.h>

int main()
{

    char Arr[10] = "Ganpati";   // we can initialize like this also , and here there is no need to wirte \0

    printf("%s\n",Arr);

    printf("Size of array is : %d\n",sizeof(Arr));

    return EXIT_SUCCESS;
}