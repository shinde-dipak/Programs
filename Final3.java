
final class Base
{

}

class Derived extends Base

class Final3
{
    public static void main(String arr[])
    {
        Base obj = new Derived();
        obj.fun();
        obj.gun();       
    }
}