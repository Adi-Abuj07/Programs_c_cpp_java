import java.util.*;
class Digits{
    public int CountDigits(int iNo)
    {
       int count=0;
       while(iNo!=0)
       {
           iNo=iNo/10;
           count++;
       }
       return count;
    }
}
public class Program16
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Digits dobj = new Digits();

      int iRet = dobj.CountDigits(iValue1);

      System.out.println("count is:"+iRet);

    }
}