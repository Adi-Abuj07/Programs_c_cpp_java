import java.util.*;
class Numbers
{
    public int SumNonFactors(int iNo)
    {
        for(int icnt=1;icnt<=iNo;icnt++)
        {
            if((iNo%icnt)!=0)
            {
               int iSum=iSum+icnt;
            }
        
        }
        return iSum;
    }
}
public class Program13
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Numbers nobj=new Numbers();

      int iRet=nobj.SumNonFactors(iValue1);

      System.out.println("Sum is:"+iRet)
      
    }
} 