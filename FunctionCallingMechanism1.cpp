#include<iostream>
using namespace std;

//call by value
void fun(int no)
{
    cout<<"Inside call by Value :"<<no<<"\n";
    no++;
}

//call by address
void gun(int *p)
{
    cout<<"Inside call by Address :"<<*p<<"\n";
    (*p)++;
}

//call by reference
void sun(int &A)
{
    cout<<"Inside calllll by reference :"<<A<<"\n";
    A++;
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    cout<<i<<"\n";
    gun(&j);
    cout<<j<<"\n";
    sun(k);
    cout<<k<<"\n";
    return 0;
}