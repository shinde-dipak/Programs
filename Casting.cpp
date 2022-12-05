#include<iostram.h>
using namespace std;

class Base
{
    public :
    int A ,B;
};

class Derived : public Base
{
    public :
    int X ,Y;

int main()
{
 Base *bp = NULL;
 Derived *dp = NULL;

 Base bobj;
 Derived dobj;

 bp = &bobj;       //no casting    -Allowed
 dp = &dobj;       //no casting    -Allowed   
 bp = &dobj;       // up casting   -Allowed 
 dp = &bobj;       // down casting  -Allowed

    return 0;
}