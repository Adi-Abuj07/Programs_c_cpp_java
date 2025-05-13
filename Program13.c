#include<stdio.h>
/// ittration
void Display(int iNO)
{
   int icnt=0;
   for(icnt=1;icnt<=5;icnt++)
   {
    printf("%d\n",iNO);
   }
}
int main(){
    int iVal=0;
    printf("Enter the Number:");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}