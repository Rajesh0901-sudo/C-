#include <iostream>

using namespace std;

class abc;

    class xyz
    {
        int d;
    public:
        void setvalue(int value)
        {
            d=value;
        }
        friend void add(xyz,abc);
    };

    class abc
    {
        int d;
    public:
        void setvalue(int value)
        {
            d=value;
        }
        friend void add(xyz,abc);
    };

    void add(xyz x,abc a)
    {
        cout<<"\nsum of the given value in \"abc\" and \"xyz\" is="<<a.d+x.d<<endl;
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
    int r,j;
    xyz x;
    abc a;
    cout<<"\nEnter a value for object \"abc\"-:";
    cin>>r;
    a.setvalue(r);
    for(int i=0;i<50;i++)
    {
        cout<<"~";
    }
    cout<<"\nEnter a value for object \"xyz\"-:";
    cin>>j;
    x.setvalue(j);
    for(int i=0;i<50;i++)
    {
        cout<<"~";
    }
    add(x,a);
    for(int i=0;i<50;i++)
    {
        cout<<"~";
    }
    quit();


    return 0;
}
