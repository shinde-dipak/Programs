#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;
        //size of object is summation of sizes of its non static characteristics
        //sizeof(obj)= sizeof(i)+sizeof(j);
        //sizeof(obj)= 4 + 4;
        //sizeof(obj)= 8;
    Demo()
    {
        i = 0;
        j = 0;
    }
    Demo(int a, int b)
    {
        i = a;
        j = b;
    }
};

int Demo::k = 0;
int main()
{
    cout<<"value of k : "<<Demo::k<<"\n";
 
  Demo obj1(10,11);
  Demo obj2(20,21);

cout<<"Value of i in obj1 :"<<obj1.i<<"\n";
cout<<"Value of i in obj2 :"<<obj2.i<<"\n";

cout<<"Value of j in obj1 :"<<obj1.j<<"\n";
cout<<"Value of j in obj2 :"<<obj2.j<<"\n";
    return 0;
}