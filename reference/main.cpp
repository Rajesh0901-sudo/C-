#include <iostream>

using namespace std;

void refe(int &a,int &b)
{
    cout<<"\nIn the function-:";
    cout<<"\naddress of a="<<a<<"\naddress of b="<<b;
    int t=a;
    a=b;
    b=t;
}
void quit()
    {
        int a;
        cout<<"\npress 0 to quit-";
        cin>>a;
        if(a==0)
            cout<<"\nprogram terminated successfully-:";
        else
            quit();
    }

int main()
{
    int x=10,y=20;
    cout << "x=10\ny=20";
    cout<<"\nin main function-:";
    cout<<"\naddress of x="<<x<<"\naddress of y="<<y;
    refe(x,y);
    cout<<"\nx="<<x<<"\ny="<<y;
    quit();
    return 0;
}
