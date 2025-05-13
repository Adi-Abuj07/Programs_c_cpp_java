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
    if(((iNo%5)==0) && ((iNo%3)==0))
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

    bool bResult=false;   //boolean value always 0;
    bResult=CheackDivisible(iVal);

    if (bResult==true)
    {
        printf("%d Number is Divisible By 3 and 5",+iVal);
    }
    else
    {
        printf("%d Number is not Divisible By 3 and 5",+iVal);
    }
    
    return 0;
}