// cheack whether number is prime or not assa asel tar boolean vapraycha 
//using flag          //return mule function cha baher padto    break loop cha baher padto 
#include<stdio.h>
#include<stdbool.h>
bool CheckPrefect(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
      int icnt=0;
      bool Flag=true;
      for(icnt=2;icnt<=(iNo/2);icnt++)
      {
        if ((iNo%icnt)==0)
        {
            Flag=false;
            break;
        }
      }
      return Flag;
}

int main()
{
   int iVal=0;
   bool iRes=false;

   printf("Enter the Number:");
   scanf("%d",&iVal);

   iRes=CheckPrefect(iVal);

   if (iRes==true)
   {
     printf("%d is Prime number",iVal);
   }
   else
   {
     printf("%d is not a Prime number",iVal);
   }
}


