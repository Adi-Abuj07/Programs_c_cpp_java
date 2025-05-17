import java.util.*;
class Digits{
    public int CountDigits(int iNo)
    {
    //    int icnt=0;
       int count=0,iDidit=0;
        // while(icnt<iNo)
       while(iNo!=0)
       {
           iDidit=iNo%10;
           count++;
           iNo=iNo/10;
           
       }
       return count;
    }
}
public class Program15
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