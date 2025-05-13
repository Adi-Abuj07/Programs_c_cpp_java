// calculate the factors of number

// #include<stdio.h>
// #define ERR_INVALID -1

void DisplayFactorial(int iNo)
{ 
  int icnt=0;
  for(icnt=1;icnt<=iNo/2;icnt++)
  {
    if (iNo%icnt==0)
    {
        printf("%d\t",icnt);
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
