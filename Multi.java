
class Multi
{
    public static void main(String arg[])
    {
        //Arr is 2 dimensional array which contain 3 one dimensional
        //array, each one dimensinal array contains 4 elements ,
        //each element is of type integer
       
       //Allowed in c&c++
        //int Arr[3][4] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};
       
       //Allowed in java
        int Arr[][] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};

        System.out.println(Arr.length);  //3
        System.out.println(Arr[0].length);  //4

    }
}