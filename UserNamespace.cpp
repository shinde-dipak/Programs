#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public :
        int i,j;
        void fun()
        {
            cout<<"Inside Fun of Demo Marvellous\n";
        }
    };
    class Hello
    {
        public :
        int x,y;
    };
}
namespace Infosystems
{
    class Demo
    {
        public :
        int a,b;
        void fun()
        {
            cout<<"Inside fun of Demo from Infosystems\n";
        }
    };
}
int main()
{
    Marvellous :: Demo obj1;
    Infosystems :: Demo obj2;
    obj1.fun();
    obj2.fun();

    return 0;
}