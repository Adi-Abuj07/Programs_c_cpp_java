import java.util.*;
class Numbers{
    public int SumFactors(int iNo)
    {
        int iSum=0;
        for(int icnt=1;icnt<=(iNo/2);icnt++)
        {
            if((iNo%icnt)==0)
            {
                iSum=iSum+icnt;
            }
        }
        return iSum;
    }
}
public class Program11
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Numbers nobj=new Numbers();

      int iRet=nobj.SumFactors(iValue1);

      System.out.println("Sumation is:"+iRet);
      
    }
} 