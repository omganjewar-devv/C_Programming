#include <stdio.h>
#include<stdlib.h>

void Maximum(int iNo1 , int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("maximum is  : %d\n",iNo1);
    }
    else
    {
        printf("maximum is  : %d\n",iNo2);
    }
}

int main()
{
    int iValue1 = 0 ; int iValue2 = 0 ; int iResult = 0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);

    return EXIT_SUCCESS;
}
