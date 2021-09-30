#include <iostream>

using namespace std;
template<class R>
void inter(R &a,R &b)
{
   R temp=a;
    a=b;
    b=temp;
}
void shape()
{
    cout<<endl;
    for(int i=0;i<51;i++)
        cout<<"~";
    cout<<endl;
}
int main()
{
    int x,y;
    shape();
    cout<<"A program to demonstrate function template-:";
    shape();
    cout<<"Enter no. x-";
    cin>>x;
    cout<<"Enter no. y-";
    cin>>y;
    shape();
    cout<<"before swapping";
    cout<<"\nX="<<x<<"\nY="<<y<<endl;
    inter(x,y);
    shape();
    cout<<"after swapping-";
    cout<<"\nX="<<x<<"\nY="<<y<<endl;
    shape();
}
