import java.util.*;
class Digits{
    public int CountFive(int iNo)
    {
        int idigit=0;
       int count=0;
       if (iNo<0)
       {
         iNo=-iNo;
       }
       while(iNo>0)
       {
        //    idigit=iNo%10;
           iNo=iNo/10;
           if(idigit==5)
           {
            count++;
           }
       }
       return count;
    }
}
public class Program18
{
    public static void main(String A[])
    {
      Scanner sobj=new Scanner(System.in);

      System.out.println("Enter the Number:");
      int iValue1=sobj.nextInt();

      Digits dobj = new Digits();

      int iRet = dobj.CountFive(iValue1);

      System.out.println("count is:"+iRet);

    }
}