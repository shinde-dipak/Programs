// Problems on N numbers
// By using OOP

#include<iostream>
using namespace std;

class ArrayX
{
    public :
    int iSize;
    int *Arr;

    ArrayX(int i)
    {
        cout<<"Allocating the memory for resources... "<<"\n";
        iSize = i;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout<<"Deallocating the memory for resources... "<<"\n";
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter the elements of Array :"<<"\n";
        
        for(int iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"Elements of Array are :"<<"\n";

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the size of array :"<<"\n"; 
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);  

    obj->Accept();
    obj->Display();

    delete obj;
    return 0;
}