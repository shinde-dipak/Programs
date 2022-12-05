#include<iostream>
using namespace std;

class Overloading
{
    public:
    //Add@2ii...........Name mangling
    int Add(int a, int b)
    {
        cout<<"Addition of 2 integers\n";
        return a+b;
    }
    //Add@2ff
    float Add(float a, float b)
    {
        cout<<"Addition of floats\n";
        return a+b;
    }
    //Add@2dd
    double Add(double a, double b)
    {
        cout<<"Addition of doubles\n";
       return a+b;
    }
    //Add@3iii
    int Add(int a, int b, int c)
    {
        cout<<"Addition of 3 integers\n";
       return a+b+c;
    }
    //fun@2if
    void fun(int a, float b)
    { }
    //fun@2fi
    void fun(float a, float b)
    { }
};

int main()
{
    Overloading obj;
   /* obj.Add(11,21);
    obj.Add(11,21,52);
    obj.Add(10.9,89.5);
    obj.Add(10.9f,89.5f);
    */
    int i;
    float f;
    double d;
    
    i = obj.Add(11,21);
        cout<<i<<"\n";
    i = obj.Add(11,21,52);
        cout<<i<<"\n";
    d = obj.Add(10.9,89.5);
         cout<<d<<"\n";
    f = obj.Add(10.9f,89.5f);
         cout<<f<<"\n";
    
    return 0;
}

/*(
sizeof('A');   //1
sizeof(11);     //4
sizeof(88.90);   //8
sizeof(88.90f); //4

int i = 10;
printf("%d",i);
printf("%d",sizeof(++i));
*/


