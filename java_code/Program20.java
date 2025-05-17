
import java.util.*;
class Digits{
    public int DispalyEven(int iNo)
    {
       int idigit=0;
       int count=0;
       if (iNo<0)
       {
         iNo=-iNo;
       }
       while(iNo>0)
       {
           if((iNo%10)%2==0)
           {
            count++;
            System.out.println("Even digit is:"+(iNo%10));
           }
       }
       return count;
    }
}
public class Program19
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Digits dobj = new Digits();

      int iRet=dobj.DispalyEven(iValue1);

      System.out.println("Even Number count is:"+iRet);

    }
}