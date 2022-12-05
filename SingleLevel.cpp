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

int main()
{
    Derived * ptr = NULL;
        
    ptr = new Derived;

    ptr->fun();
    ptr->gun();
    
    delete ptr;
    return 0;
}