// Problems on digits
// By using OOP

// Accept No from user and find the frequency of each digit.
// Input : 7985674
// Output : 4 occurs 1 time
//          5 occurs 1 time
//          6 occurs 1 time
//          7 occurs 2 time
//          8 occurs 1 time
//          9 occurs 1 time


#include<iostream>
using namespace std;

class DigitX
{
    public :
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10]={0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > 0)
                {
                    cout<<iCnt<<" Occurs at "<<Frequency[iCnt]<<" times"<<"\n";
                }
            }
        }       
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Please enter the number :"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    
    return 0;
}