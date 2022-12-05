#include<iostream>
using namespace std;

class Base
{
    public :               // access specifier
    int A , B;

    void fun()             //function defination
    {
        cout<<"Base fun\n";
    }
    void gun(int i)       //function defination
    {
        cout<<"Base gun with 1 integer\n";
    }
    void gun(int i , int j)   // Overloaded function defination
    {
        cout<<"Base gun with 2 integers\n";
    }
};

class Derived : public Base
{
    public :
    int X,Y;
    void sun()        // Function defination
    {
        cout<<"Derived sun\n";
    }
    void fun()        // function re-defination
    {
        cout<<"Derived fun\n";
    }

};

int main()
{
    Derived dobj;

    dobj.fun();    //call
    dobj.gun(11);  //call
    dobj.gun(11,21); //call
    dobj.sun();   //call

    return 0;
}