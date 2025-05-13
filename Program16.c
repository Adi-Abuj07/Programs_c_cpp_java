#include<stdio.h>
/// ittration
void Display(int iNO)
{
   int icnt=0;
   for(icnt=1;icnt<=iNO;icnt++)
   {
    printf("%d\n",icnt);
   }
}
int main(){
    int iVal=0;
    printf("Enter the Frequancy:");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}