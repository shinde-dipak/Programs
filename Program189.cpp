// Addition of two numbers
// By using OOP

#include<iostream>
using namespace std;

class Arithematic
{
    public :                   // Access Specifier
    int iValue1;                // Charecteristics
    int iValue2;                // Charecteristics

    Arithematic()               // default Constructor
    {
        iValue1 = 0;
        iValue2 = 0;  
    }

    Arithematic(int A, int B)   // parameterised constructor
    {
        iValue1 = A;
        iValue2 = B;
    }

    int Addition()          // behavour or function
    {
        int iAdd = 0;
        iAdd = iValue1 + iValue2;
        return iAdd;
    }
};

int main()
{
   int iRet = 0;

   Arithematic obj1;
   Arithematic obj2(10,11);
   Arithematic obj3(20,21);

   iRet = obj1.Addition();
   cout<<"Addition is :"<<iRet<<"\n";

   iRet = obj2.Addition();
   cout<<"Addition is :"<<iRet<<"\n";

   iRet = obj3.Addition();
   cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}