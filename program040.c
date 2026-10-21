#include <stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0 ; int iValue2 = 0 ; int iResult = 0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    if(iValue1>iValue2)
    {
        printf("maximum is  : %d\n",iValue1);
    }
    else
    {
        printf("maximum is  : %d\n",iValue2);
    }

    return EXIT_SUCCESS;
}
