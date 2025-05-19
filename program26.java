/*input 4 4
a       a       a       a
b       b       b       b
c       c       c       c
d       d       d       d
*/
import java.util.*;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
       int i=0,j=0;
       char ch1='\0';
       char ch2='\0';

       for(i=1,ch1='a',ch2='A';i<=iRow;i++,ch1++,ch2++)
       { 
          for(j=1;j<=iCol;j++)
          {
            if(i%2==0)
            {
                System.out.print(ch2+"\t");
            }
            else
            {
                System.out.print(ch1+"\t");
            }
          }
          System.out.println("");
        }
    }
}
public class program100
{
    public static void main(String A[])
    {
       Scanner sobj=new Scanner(System.in);

       int iValue1=0,iValue2=0;

       System.out.println("Enter the Rows:");
       iValue1=sobj.nextInt();

       System.out.println("Enter the Columns:");
       iValue2=sobj.nextInt();

       Pattern pobj=new Pattern();

       pobj.Display(iValue1,iValue2);
    }
}