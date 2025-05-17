import java.util.*;
public class Program4
{
    public static void main(String A[])
    {
      Scanner sobj=null;
    //   int iNo1=0,iNo2=0,iAns=0; uninitilised variable not allowed in java
      sobj=new Scanner(System.in);

      System.out.println("Enter the First number:");
      iNo1=sobj.nextInt();

      System.out.println("Enter the First number:");
      iNo2=sobj.nextInt();

      iAns=iNo1+iNo2;

      System.out.println("Addition is:"+iAns);

    }
}