
/*
start
       Accept input from user
       if percerntage is less then 0 or greater then 100
          display Fail
       if percerntage is greater than 0 and less then 35
          display Pass class
        if percerntage is greater equal than 35 and less then 50
          display Secoend class
        if percerntage is greater equal than 50 and less then 70
          display First class
        if percerntage is greater equal than 70 and less equal then 100
          display First class with Destinction
end
*/

#include<stdio.h>

void DisplayClass(float iPer)
{
   if((iPer<0)||(iPer>100))
   {
     printf("Wrong Input");
     return;
   }
   if((iPer>0.0f)&&(iPer<35.0f))
   {
    printf("Your are Fail");
   }
   else if((iPer>=35.0f)&&(iPer<50.0f))
   {
    printf("Your in Pass class");
   }
   else if((iPer>=50.0f)&&(iPer<60.0f))
   {
    printf("Your in Second class");
   }
   else if((iPer>=60.0f)&&(iPer<70.0f))
   {
    printf("Your in First class");
   }
   else if((iPer>=70.0f)&&(iPer<=100))
   {
    printf("Your in First class with Destinction");
   } 
}

int main()
{
    float iPercentage=0.0;
    
    printf("Enter the Persentage Optained:");
    scanf("%f",&iPercentage);

    DisplayClass(iPercentage);

    return 0;
}