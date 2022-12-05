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
        iSize = i;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout<<"Inside Destructor "<<"\n";
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
    ArrayX obj(5);  // static and hard coded

    obj.Accept();
    obj.Display();


    return 0;
}