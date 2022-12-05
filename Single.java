
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base Constructor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()   //Defination
    {
        System.out.println("Inside Base Fun");
    }
    public void gun()    //Defination
    {
        System.out.println("Inside Base Gun");
    }
    public void fun(int No)   //overloaded defination
    {
        System.out.println("Inside Base fun with one interger");
    }

}

class Derived extends Base     //class Derived : public Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.X = 30;
        this.Y = 40;
    }
    public void sun()   //Defination
    {
        System.out.println("Inside Derived Sun");
    }
    public void gun()    //Overrided Defination
    {
        System.out.println("Inside Derived gun");
    }
}
class Single
{
    public static void main(String arg[])
    {
       // Base bobj1 = new Base();   //no casting
        //Derived dobj1 = new Derived();  // no casting
        Base bobj2 = new Derived();    //up casting
        //Derived dobj2 = new Base();    //down casting //not allowed

        bobj2.fun();     //Base fun
        bobj2.fun(11);   //base fun
        bobj2.gun();      //derived gun
        bobj2.sun();       //derived sun   
    }

}