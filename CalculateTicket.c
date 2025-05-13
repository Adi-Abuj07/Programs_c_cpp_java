////////////////////////////////////////////////////////
//  Name :-          CalculateTicket
//  Descreption :-   Calculate ticket for User  
//  Author :-        Aditya Abuj
//  Date :-          06/05/2025
//
////////////////////////////////////////////////////////

/*Start
   Accept the Age as a input from user
     if Age is less than 5 then no ticket
     if Age is in between 5 to 18 then ticket is 799
     if Age is in between 18 t0 50 then ticket is 999
     if Age is in between above 50 then ticket is 599
end
*/

#include<stdio.h>
#define ERR_INVALID -1

int CalculateTicket(int iAge)
{
    int Price=0;
    if(iAge<0)
    {
        return ERR_INVALID;
    }
    if((iAge>=0)&&(iAge<=5))
    {
        Price=0;
    }
    else if((iAge>5) && (iAge<=18))
    {
        Price=799;
    }
    else if((iAge>18) && (iAge<=50))
    {
        Price=999;
    }
    else if(iAge>50)
    {
        Price=599;
    }
    return Price;
}


int main()
{
    int iAg;
    int iPrice;
    printf("Enter your Age:");
    scanf("%d",&iAg);

    iPrice=CalculateTicket(iAg);
    if(iPrice==ERR_INVALID){
        printf("Please Enter Valid Age");
    }
    else{
        printf("Price for You is :%d",iPrice);
    }
    
    return 0;
}