#include<stdio.h>
/// ittration
void Display(int iNO)
{
   int icnt=0;
   for(icnt=1;icnt<=iNO;icnt++)
   {
    printf("Hello\n");
   }
}
int main(){
    int iVal=0;
    printf("Enter the Frequancy:");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}