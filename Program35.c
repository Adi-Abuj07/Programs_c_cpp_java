// calculate the factors of number with using create updater

#include<stdio.h>
void DisplayFactorial(int iNo)
{ 
    if (iNo<0)  
    {
        iNo=-iNo; 
    }

    int icnt=0;
  for(icnt=1;icnt<=(iNo/2);icnt++) 
  {
    if (((iNo%icnt)==0)&&((icnt%2)==0))
    {
    //     if ((icnt%2)==0)
    // {
    //         printf("Factor is:%d\t",icnt);   // Also we can do it
    // }
            printf("Factor is:%d\t",icnt);
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
