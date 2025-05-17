import java.util.*;
class Numbers{
    public boolean CheckEven(int iNo)
    {
        boolean Ans=true;
        if(iNo<0)
        {
            return false;
        }
        if(iNo%2==0)
        {
            Ans=true;
        }
        else
        {
           Ans=false;
        }
        return Ans;
    }
}
public class Program9
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Numbers nobj=new Numbers();

      boolean bRet=nobj.CheckEven(iValue1);
      if(bRet==true)
      {
        System.out.println("It is even number:"+iValue1);
      }
      else
      {
        System.out.println("It is odd number:"+iValue1);
      }
    }
} 