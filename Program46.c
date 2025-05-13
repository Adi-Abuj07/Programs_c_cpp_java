#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit=0;
    int iCount=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if (iDigit%2==0)
        {
            iCount++;
        }
        
         
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