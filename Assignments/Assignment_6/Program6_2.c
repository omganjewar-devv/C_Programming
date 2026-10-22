////////////////////////////////////////////////////////////
//
//  Function Name : CheckAdmission
//  Description   : It is used to check admission eligibility
//  Input         : Float, Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}