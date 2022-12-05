
class Demo 
{
    public int No1;            //non-static charactristics
    public int No2;            //non-static charactristics
    public static int No3;    //Static charectristics
    public static int No4;     //Static charectristics

    static              //static block
    {
        System.out.println("Inside Static block");
        No3 = 51;
        No4 = 101;
    }
    public Demo()
    {
        System.out.println("Inside Constructor");
        No1 = 11;
        No2 = 21;
    }
    public void Fun()    //non static method
    {   
        //non static method access static as well as non static data
        //we can use this keyword in non static 
        System.out.println("Inside non static fun");
        System.out.println("Value of No1 :"+this.No1);
        System.out.println("Value of No2 :"+this.No2);
        System.out.println("Value of No3 :"+this.No3);
        System.out.println("Value of No4 :"+this.No4);

    }
    public static void gun()   //static method
    {   
        //Static method access only static Data
        //we cant use 'this' keyword in static   
        System.out.println("Inside Static method gun");
       // System.out.println("Value of No1 :"+No1);
        //System.out.println("Value of No2 :"+No2);
        System.out.println("Value of No3 :"+No3);
        System.out.println("Value of No4 :"+No4);
    }

}

class StaticDemo
{
    static
    {
        System.out.println("Inside static block of staticDemo class which contains main ");
    }
    public static void main(String arg[])
    {
        System.out.println("Inside Main");
        System.out.println("Value of static No3 :"+Demo.No3);
        System.out.println("Value of static No4 :"+Demo.No4);
        Demo.gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
        obj1.Fun();

        

    }
}

