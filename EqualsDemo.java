class Demo
{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;
    }
}

class EqualsDemo
{
    public static void main(String A[])
    {
        //Demo obj1 = new Demo(11,21);
        //Demo obj2 = new Demo(11,21);

        String s1 = "Hello";
        String s2 = "Hello";

        System.out.println("Hashcode of s1 :"+s1.hashCode());
        System.out.println("Hashcode of s2 :"+s2.hashCode());

        //if(obj1.equals(obj2))
        if(s1.equals(s2))      //if("Hello"=="Hello")  //compare with data
        {
            System.out.println("Object are same");
        }
        else
        {
            System.out.println("Object are Different");
        }
        if(s1==s2)     //if(1001 == 1001) compare with Hashcode
        {
            System.out.println("Object are same");
        }
        else
        {
            System.out.println("Object are Different");
        }
    }
}