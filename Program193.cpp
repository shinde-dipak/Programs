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

    void Function()
    {
        // Logic
        // it contains Business logic
    }    
};

int main()
{
   int iLength = 0;

   cout<<"Enter the Number of elements :"<<"\n";
   cin>>iLength;

   ArrayX obj(iLength);

   obj.Accept();
   obj.Display();
   obj.Function();

    return 0;
}