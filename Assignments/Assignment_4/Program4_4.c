////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description   : It is used to check whether a person is eligible to vote
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 11 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge<0)
    {
        printf("invalid age.");
    }
    else if (iAge>0 && iAge<18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("You can vote.");
    }
}    

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
