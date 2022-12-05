// Problems on N numbers
// By using OOP

#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;
    ArrayX(int i)
    {
        iSize = i;
        Arr = new int[iSize];
    }
    void Accept()
    {
        cout<<"Please enter the numbers :"<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Elements of the Array are :"<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }

    int SumEven()
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            if((Arr[iCnt]%2) == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }

};

int main()
{
   int iLength = 0, iRet = 0;

   cout<<"Enter the Number of elements :"<<"\n";
   cin>>iLength;

   ArrayX obj(iLength);

   obj.Accept();
   obj.Display();

   iRet = obj.SumEven();

   cout<<"Addition of Even elements is :"<<iRet<<"\n";

   return 0;
}