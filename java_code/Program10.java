import java.util.*;
class Numbers{
    public void DisplayFactors(int iNo)
    {
        for(int icnt=1;icnt<=(iNo/2);icnt++)
        {
            if((iNo%icnt)==0)
            {
                System.out.println("Factor of "+iNo+" is:"+icnt);
            }
        }
    }
}
public class Program10
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Numbers nobj=new Numbers();

      nobj.DisplayFactors(iValue1);
      
    }
} 