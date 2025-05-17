
import java.util.*;
class Digits{
    public int DispalyEven(int iNo)
    {
       int idigit=0;
       int iRev=0;
       if (iNo<0)
       {
         iNo=-iNo;
       }
       while(iNo>0)
       {
          idigit=iNo%10;
          iRev=iRev*10+idigit;
          iNo=iNo/10;
       }
       return iRev;
    }
}
public class Program21
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