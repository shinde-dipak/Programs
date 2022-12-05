// problems on digit
// without OOP

// accept two numbers from user and chk weather that nos is Anagram or not.
// Input : 789567           597768
// Output : Numbers are Anagram
// Anagram = Frequency of each digit in both numbers is same

#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency[10] = {0};
    bool Flag = true;

    while((iNo1 != 0)&&(iNo2 != 0))
    {
        Frequency[(iNo1 % 10)]++;
        Frequency[(iNo2 % 10)]--;
        iNo1 = iNo1 / 10;
        iNo2 = iNo2 / 10;
    }

    for(int iCnt = 0; iCnt < 10; iCnt++)
    {
        if(Frequency[iCnt] != 0)
        {
            Flag = false;
            break;
        }
    }
    return Flag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are Anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not Anagram"<<"\n";
    }
    return 0;
}
