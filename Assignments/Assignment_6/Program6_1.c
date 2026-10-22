////////////////////////////////////////////////////////////
//
//  Function Name : CalculateElectricityBill
//  Description   : It is used to calculate the electricity bill
//  Input         : Integer
//  Output        : None
//  Author        : Om Girish Ganjewar
//  Date          : 22 / 10 / 2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits<=100)
    {
        fBill = iUnits*5;
        printf("Bill is : %f",fBill);
    }
    else if(iUnits>100 && iUnits<=200)
    {
        fBill = (500 + ((iUnits-100)*7));
        printf("Bill is : %f",fBill);
    }
    else if(iUnits>200)
    {
        fBill = ( 500 + 700 + ((iUnits-200)*10));
        printf("Bill is : %f",fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}