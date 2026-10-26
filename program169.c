// input -> 6457  output -> 22 / (no.of digits) -> 22/4 = 5.5
// input -> 734   output -> 14 / (no.of digits) -> 14/3 = 4.66
// input -> 45    output -> 9 / (no.of digits) -> 9/2 = 4.5

#include <stdio.h>
#include <stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0 , iSum = 0 , iCount = 0 ;
    float fAvg = 0.0f;
    if (iNo < 0 )
    {
        iNo = -iNo ;
    }
    
    while (iNo != 0 )
    {
        iDigit = iNo % 10 ;
        iSum = iSum + iDigit;
        iCount++ ;
        iNo = iNo /10 ;
    }

    fAvg = iSum / iCount;  // need of typecsting

    return fAvg;
}

int main()
{
    int iValue = 0 ;
    float fRet = 0.0f ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digits : %f\n",fRet);

    return EXIT_SUCCESS;
}
