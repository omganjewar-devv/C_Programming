#include <stdio.h>
#include<stdlib.h>

int Minimum(int iNo1 , int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0 ; int iValue2 = 0 ; int iResult = 0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    iResult = Minimum(iValue1,iValue2);

    printf("Manimum is : %d\n",iResult);

    return EXIT_SUCCESS;
}
