import java.util.*;
class Numbers
{
    public void Sum(int iNo)
    {
        int iSum=0;
        int iiSum=0;

        for(int icnt=1;icnt<iNo;icnt++)
        {
            if((iNo%icnt)==0)
            {
                iSum=iSum+icnt;   
            }
            else
            {
               iiSum=iiSum+icnt; 
            }
        }
        System.out.println("Sumation of factors is:"+iSum);
        System.out.println("Sumation of non factors is:"+iiSum);
    }
}
public class Program14
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Numbers nobj=new Numbers();

      nobj.Sum(iValue1);
      
    }
} 


