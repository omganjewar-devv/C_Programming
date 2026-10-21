/*
-----------------------------------------
               operation &&
-----------------------------------------
Result1  +  Result2   ->  Final_result
-----------------------------------------
TRUE         TRUE           TRUE
TRUE         FALSE          FALSE
FALSE        TRUE           FALSE              -> shortcircut evaluation
FALSE        FALSE          FALSE              -> shortcircut evaluation
-----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if(((iNo%3) == 0) && ((iNo%5) == 0))            // here we have give safe brackets , so this program wont give any error on any compiler
    {
        printf("the number is divisible by 3 & 5.\n");
    }
    else{
        printf("the number is not divisible by 3 & 5.\n");
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



// if w give input 10 , then shortcircuit evaluation will happen
// shortcircut evaluation means , if madhe 2 condition aahe ani first condition satisfy nahi zali then , 2nd condition check hote nahi , yalach shortcircut evaluation mhantat . 