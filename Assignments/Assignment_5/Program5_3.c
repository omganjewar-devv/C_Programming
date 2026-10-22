////////////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Description   : It is used to display the grade according to the marks
//  Input         : Float
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks >= 90 && fMarks<=100)
    {
        printf("Grade A");
    }
    else if  (fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade B");
    }
    else if (fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade C");
    }
    else if (fMarks >= 40 && fMarks <= 59)
    {
        printf("Grade D");
    }
    else if (fMarks >= 0 && fMarks < 40)
    {
        printf("Fail.");
    }
    else
    {
        printf("invalid marks . ");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}