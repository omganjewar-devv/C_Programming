/*
    iRow = 4 
    iCol = 4 

    $   *   *   *
    *   $   *   *
    *   *   $   *
    *   *   *   $
*/  

#include<stdio.h>
#include<stdlib.h>
 
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    if(iRow != iCol)      // this is filter , we need filter here because our program is based on diagonal , and it is only possible in square matrix
    {
        printf("Invalid input.");

        return;
    }

    for(i = 1 ; i <= iRow ; i++ )
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i == j )
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

