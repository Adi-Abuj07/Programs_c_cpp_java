
#include<stdio.h>

int Summation(int iNo)
{
     int icnt=0;
     int sum=0;  // Use for to store the Sumation of the itterable values
    for(icnt=1;icnt<=iNo;icnt++)
    {
        sum=sum+icnt;
    }
    return sum;
}
int main()
{
    int iVal=0;
    printf("Enter the number:");
    scanf("%d",&iVal);

    int bResult;
    bResult=Summation(iVal);

    printf("Sumation is :%d",bResult);
   
    return 0;
}