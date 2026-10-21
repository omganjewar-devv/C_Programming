/*
-----------------------------------------
               operation ||
-----------------------------------------
Result1  +  Result2   ->  Final_result
-----------------------------------------
TRUE         TRUE           TRUE              -> shortcircut evaluation
TRUE         FALSE          TRUE              -> shortcircut evaluation
FALSE        TRUE           TRUE
FALSE        FALSE          FALSE
-----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if(((iNo%3) == 0) || ((iNo%5) == 0))            // here we have give safe brackets , so this program wont give any error on any compiler
    {
        printf("the number is divisible by 3 or 5.\n");
    }
    else{
        printf("the number is not divisible by 3 or 5.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}

/* 

   | -> bitwise or
  || -> logical or

*/

