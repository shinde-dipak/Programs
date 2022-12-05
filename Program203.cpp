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

class MarvellousLB : public ArrayX
{
    public :

    MarvellousLB (int i) : ArrayX(i)  //Base member initialization
    { }
    int Minimum()
    {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt]< iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }

};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array :"<<"\n"; 
    cin>>iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Minimum();

    cout<<"Smallest element is : "<<iRet<<"\n";

    delete obj;

    return 0;
}