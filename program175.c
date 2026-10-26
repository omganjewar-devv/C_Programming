#include <stdio.h>
#include <stdlib.h>

int Reverse(int iNo)
{
    int iCount = 0;
    int iRev = 0;

    while (iNo != 0)
    {
        iCount = iNo % 10 ;
        iRev = ((iRev*10) + iCount );
        iNo = iNo / 10 ;
    }
    return iRev ;
}

int main()
{
    int iValue = 0 , iRet = 0;
   
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return EXIT_SUCCESS;
}
