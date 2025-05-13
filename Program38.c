// cheack whether Number is prime or not 
#include<stdbool.h>
bool CheakPrime(int iNo)
{
    int icnt=0;
    bool bFlag=true;

    for(icnt=2;icnt<=(iNo/2);icnt++)
    {
        if(iNo%2==0)
        {
            bFlag=false;
            break;
        }
    }
    return bFlag;

}
int main()
{
    int iValue=0;
    int iResult=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iResult=CheakPrime(iValue);

    if (iResult==true)
    {
        printf("%d Number is Prime",iValue);
    }
    else
    {
        printf("%d Number not is Prime",iValue);   
    }
    return 0;
}