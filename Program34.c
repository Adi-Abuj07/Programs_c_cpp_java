// calculate the factors of number with using create updater

#include<stdio.h>
void DisplayFactorial(int iNo)
{ 
    if (iNo<0)  // Updator
    {
        iNo=-iNo; //convert into +value -(-12)=12 and first run = cha pudcha code
    }

    int icnt=0;
  for(icnt=1;icnt<=iNo;icnt++) // reduce the time complexity is using iNo/2
  {
    if (iNo%icnt==0)
    {
        printf("Factors %d\t",icnt);
    }
    else
    {
        printf("Non Fcator is :%d\t",icnt);
    }
  }
}
int main()
{
    unsigned int iVal=0;  
    printf("Enter the number:");
    scanf("%u",&iVal);
 
    DisplayFactorial(iVal);

    return 0;
}
