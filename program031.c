#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;


    printf("enter your name : \n");
    scanf("%[^'\n']s",sName);         // enter remain in input buffer.
    printf("enter your age : \n");
    scanf(" %d",&iAge);              // ithe %d cha aadhi space takli tr toh input buffer madhe flush karun sagla clear karto.

    printf("enter your marks : \n");
    scanf("%f",&fMarks);

    printf("welcome %s\n", sName);
    printf("your age is : %d\n",iAge);
    printf("your marks are : %f\n",fMarks);

    return EXIT_SUCCESS;
}
