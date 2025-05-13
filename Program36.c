// calculate the factors of number with using create updater calculate the sum of factors


#include<stdio.h>
int AddFactores(int iNo)
{ 
    if (iNo<0)  
    {
        iNo=-iNo; 
    }

    int icnt=0;
    int iSum=0;
  for(icnt=1;icnt<=(iNo/2);icnt++) 
  {
    if ((iNo%icnt)==0)
    {
        iSum=iSum+icnt;
    }
  }
  return iSum;
  
}
int main()
{
    unsigned int iVal=0;
    int iRet =0;
    printf("Enter the number:");
    scanf("%u",&iVal);
 
    iRet=AddFactores(iVal);

    printf("Addition of Factors is: %d",iRet);
    return 0;
}
