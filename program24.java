/*input 4 4
    1 * 3 *
    1 * 3 *
    1 * 3 *
    1 * 3 *
*/
import java.util.*;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
       int i=0,j=0;
       char ch='\0';
       for(i=1,ch='A';i<=iRow;i++,ch++)
       { 
          for(j=1;j<=iCol;j++)
          {
            System.out.print(ch+"\t");
          }
          System.out.println("");
        }
    }
}
public class program99
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