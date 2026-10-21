/*
    Step 1 : understand the problem statement
    Step 1 : write the algorithm 
    Step 1 : decide the programming language 
    Step 1 : write a program
    Step 1 : test the process
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                    
// step 1 : understand the problem statement          
//          user is going to enter any 2 integer      
//          and we have to perform addition           
//                                                    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                    
// step 2 : write the algorithm                       
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create variable to store result as Ans
        Perform the addition of No1 + No2
        Store result in Ans
        Display Ans 
    END
*/                               
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  step 3: decide the programming language 
//          we decide C programming language
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  step 4: write a program 

#include <stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2 ;      // Business logic 

    return iAns;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1 , iValue2);       
    
    printf("Addition is : %d\n",iResult);

    return 0;
}
