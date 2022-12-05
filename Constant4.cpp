#include<iostream>
using namespace std;

class Demo
{
    public :
    int i;
    int j;
    //parameterised constructor with defaut values
    Demo(int x = 10, int y =20)
    {
        i = x;
        j = y;
    }
    void fun()
    {
        i++;
        j++;
    }
    void gun() const
    {
        i++;    //not allowed
        j++;    //not allowed
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);
    
    obj3.fun();
    obj3.gun();


    return 0;
}