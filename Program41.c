#include<stdio.h>
#include<stdbool.h>
bool CheckPrefect(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int sum=0;
    for(icnt=2;icnt<=(iNo/2);icnt++)
    {
      if ((iNo%icnt)==0)
      {
          sum=sum+icnt;
          if (sum>=0)
          {
              return false;
          }  
      }
    }
    return true
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