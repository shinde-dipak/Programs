#include<iostream>
using namespace std;
//class Decleration
class Maths
{
    public:             //access specifier
        int iNo1;       //characteristics
        int iNo2;       //characteristics

     Maths()            //Constructor(Default)
     {
        iNo1 = 0;
        iNo2 = 0;
     }

     Maths(int A, int B)    //Constructor(Parameteriesed)
     {

        iNo1 = A;
        iNo2 = B;
     }

     int Addition()     //Behaviour
     {
        return iNo1 + iNo2;
     }
    int Substraction()  //Behaviour
    {
        return iNo1 - iNo2;
    }
};

int main()
{

    Maths mobj1;
    Maths mobj2(11,10);
    int iRet = 0;

    iRet = mobj2.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

     iRet = mobj1.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}
