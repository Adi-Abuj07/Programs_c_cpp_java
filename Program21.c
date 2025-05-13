/*
start
   Take the input form the user
   if input is 

*/
#include<stdio.h>
#include<stdbool.h>
bool CheackEven(int INo){

 return((INo%2)==0)

}
int main()
{
    int iVal=0;
    printf("Enter the number for Cheack whether the number Even or Odd:");
    scanf("%d",&iVal);

    bool bResult=false;
    bResult=CheackEven(iVal);

    if (bResult==true)
    {
        printf("%d Number is Even",+iVal);
    }
    else
    {
        printf("%d Number is Odd:%d",+iVal);
    }
    
    return 0;
}