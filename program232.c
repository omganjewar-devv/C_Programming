#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char Arr[20] = "Ganpati Pune";   // we can initialize like this also , and here there is no need to wirte \0

    printf("%s\n",Arr);

    printf("Size of array is : %d\n",strlen(Arr));

    return EXIT_SUCCESS;
}
