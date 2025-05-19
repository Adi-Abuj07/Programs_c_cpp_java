/*input 4 4
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/
import java.util.*;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
       int i=0,j=0;
       int icnt=0;
       for(i=1,icnt=1;i<=iRow;i++)
       { 
          for(j=1;j<=iCol;j++,icnt++)
          {
            System.out.print(icut+"\t");
          }
          System.out.println("");
        }
    }
}
public class program102
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