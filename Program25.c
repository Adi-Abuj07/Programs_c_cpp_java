
#include<stdio.h>
#define ERR_INVALID -1

int Factorial(int iNo)
{
     int icnt=0,iFact=1;  // Use for to store the Sumation of the itterable values
    if(iNo<0)
    {
        return ERR_INVALID;
    }
    for(icnt=1;icnt<=iNo;icnt++)
    {
        iFact=iFact*icnt;
    }

    return iFact;
}
int main()
{
    int iVal=0;  // always initilise the value of variable with 0
    printf("Enter the number:");
    scanf("%d",&iVal);

    int iResult;
    iResult=Factorial(iVal);

    if(iResult==ERR_INVALID)
    {
        printf("Invalid Input:\n");
    }
    else{
        printf("Factorial is :%d",iResult);
    }

    
   
    return 0;
}