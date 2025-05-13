
#include<stdio.h>
#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{ 
    int iFact=1;
    if(iNo<0)
    {
        return ERR_INVALID;
    }
   int icnt=1;
   while (icnt<=iNo)
    {
        iFact=iFact*icnt;
        icnt++;
    }

    return iFact;
}
int main()
{
    unsigned int iVal=0; 
    unsigned long iResult=0; 

    printf("Enter the number:");
    scanf("%u",&iVal);
 
    iResult=Factorial(iVal);

    if(iResult==ERR_INVALID)
    {
        printf("Invalid Input:\n");
    }
    else{
        printf("Factorial is :%lu",iResult); 
    }
    return 0;
}