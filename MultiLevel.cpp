#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    Base()
    {
        cout<<"inside Base constuctor\n";
    }
    ~Base()
    {
        cout<<"inside Base destructor\n";
    }
    void fun()
    {
        cout<<"Inside Base Fun\n";
    }
};

class Derived : public Base
{
    public :
    int X ,Y;
    Derived()
        {
            cout<<"Inside Derived constructor\n";
        }
    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside gun of Derived\n";
    }
};

class DerivedX : public Derived
{
    public : 
    int i , j;
    
    DerivedX()
    {
        cout<<"Inside DerivedX constructor\n";
    }
    ~DerivedX()
    {
        cout<<"Inside DerivedX destructor\n";
    }
    void sun()
    {
        cout<<"Inside DerivedX sun\n";
    }
};


int main()
{
   cout<<"Size of Base : "<<sizeof(Base)<<"\n";
   cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";
 
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}