#include <iostream>

using namespace std;

class cop
{
    int a;
public:
    cop(){ }
    cop(int b)
    {
        cout<<"parameterized constructor called-:\n";
        a=b;
    }
    cop(cop &x)
    {
        cout<<"copy constructor called-:\n";
        a=x.a;
    }
    void print()
    {
        cout<<"\na="<<a;
    }
};
void shape()
{
    cout<<endl;
    for(int i=0;i<51;i++)
    {
        cout<<"~";
    }
    cout<<endl;
}

int main()
{
    shape();
    cout<<"A program to demonstrate \"COPY CONSTRUCTOR\"-:";
    shape();
    cop c1(10);
    cout<<"In object c1-";c1.print();
    shape();
    cop c2(c1);
    cout<<"In object c2-";c2.print();
    shape();
    cop c3=c2;
    cout<<"In object c3-";c3.print();
    shape();
    return 0;
}
