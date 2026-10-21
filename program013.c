#include <stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  input : Integer , Integer
//  Outpur : Integer
//  Description : Performs Addition 
//  Date : 04/10/2026
//  Author : Om Girish Ganjewar
//
//////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,   // First input
                int iNo2    // Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2 ;      // Business logic 

    return iAns;
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application 
//
/////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter First Number : \n");
    if (scanf("%d",&iValue1) != 1 )
    {
        fprintf(stderr,"unable to proced , as input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number : \n");
    if (scanf("%d",&iValue2) != 1 )
    {
        fprintf(stderr,"unable to proced , as input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1 , iValue2);       
    
    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////
//.        Step 5 : test the process
//
//       Tested test cases
//------------------------------------------
//      Input1      Input2      Output
//------------------------------------------
//        10          11          21
//        11          0           11
//         0          11          11
//        20          -9          11
//        -9          20          11
//       -20          -11        -31
///////////////////////////////////////////////////////////////////////