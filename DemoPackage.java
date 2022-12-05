import java.util.*;     //Inbuilt package
import Marvellous.Arthimatic;   //user defined package
import Marvellous.PPA.Loop;     // nested Package

class DemoPackage
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number");
        int iNo2 = sobj.nextInt();

        Arthimatic aobj = new Arthimatic(iNo1 , iNo2);

        int iResult = aobj.Addition();
        System.out.println("Addition is : "+iResult);

        iResult = aobj.Substraction();
        System.out.println("Substraction is : "+iResult);
    
        Loops lobj = new Loop()
        
    }
}