//cheack wether the number is perfect or not

// calculate the factors of number with using create updater calculate the sum of factors


#include<stdio.h>
#include<stdbool.h>
bool AddFactores(int iNo)
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
  printf("%d",iSum);
  if (iNo==iSum)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
    int iVal=0;
    int iRet=0;
    printf("Enter the number:");
    scanf("%d",&iVal);
 
    iRet=AddFactores(iVal);

    if (iRet==true)
    {
        printf("%d is Perfect Number",iVal);
    }
    else
    {
        printf("%d is not a Perfect Number",iVal);
    }
     
    return 0;
}
