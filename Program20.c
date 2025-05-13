//cheak divisibal by

/*
start
   Take the input form the user
   if input is 

*/
#include<stdio.h>
#include<stdbool.h>
bool CheackDivisible(int iNo)
{

    bool bres=false;
    if((iNo%2)==0)
    {
       bres=true;
    }
    else{
        bres=false;
    }
    return bres;

}
int main()
{
    int iVal=0;
    printf("Enter the number for Cheack whether the number Even or Odd:");
    scanf("%d",&iVal);

    bool bResult=false;
    bResult=CheackDivisible(iVal);

    if (bResult==true)
    {
        printf("%d Number is Even",+iVal);
    }
    else
    {
        printf("%d Number is Odd",+iVal);
    }
    
    return 0;
}