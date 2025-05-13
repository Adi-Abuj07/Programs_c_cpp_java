
#include<stdio.h>
#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
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
    unsigned int iVal=0;
    unsigned long iResult;  
    printf("Enter the number:");
    scanf("%u",&iVal);

    iResult=Factorial(iVal);

    if(iResult==ERR_INVALID)
    {
        printf("Invalid Input:\n");
    }
    else{
        printf("Factorial is :%lu",iResult); //%u  to take the the input of unsigned input 
    }
    return 0;
}