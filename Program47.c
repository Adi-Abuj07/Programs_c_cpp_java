#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit=0;
    int iCount=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iCount=iCount+iDigit;
        iNo=iNo/10;
    }
    return iCount;
}

int main()
{
    int iVal=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iVal);
    
    iRet=CountEvenDigits(iVal);

    printf("%d",iRet);

    return 0;
}