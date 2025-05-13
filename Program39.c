#include<stdio.h>
#include<stdbool.h>
bool CheckPrefect(int iNo)
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
   bool iRes=false;

   printf("Enter the Number:");
   scanf("%d",&iVal);

   iRes=CheckPrefect(iVal);

   if (iRes==true)
   {
     printf("%d is Perfect number",iVal);
   }
   else
   {
     printf("%d is not a Perfect number",iVal);
   }
}