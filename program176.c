// check palindrome number
// if we reverse a number and if it same as original number then it is palindrome .

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iCount = 0;
    int iRev = 0;

    while (iNo != 0)
    {
        iCount = iNo % 10 ;
        iRev = ((iRev*10) + iCount );
        iNo = iNo / 10 ;           
    }                     // issue is here , at the end of loop value of iNo becomes 0.
    
    if(iRev == iNo)      // after that here we are comparing iRev with iNo (0) , so this gives false always 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;
   
    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }

    return EXIT_SUCCESS;
}
