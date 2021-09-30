#include <iostream>
#include<math.h>
using namespace std;

class first
{
protected:
    int p[3];
public:

    void getp()
    {
        cout<<"enter three point 1-";
        for(int i=0;i<3;i++)
        {
            cin>>p[i];
        }

    }
};
class second
{
protected:
    int q[3];
public:
    void getq()
    {
        cout<<"enter three point 2-";
        for(int i=0;i<3;i++)
        {
            cin>>q[i];
        }
    }

};
class third :public first , public second
{
    double dis;
public:
    void dist()
    {
        int x=0,y=0,z=0;
        x=pow(p[0]-q[0],2);
        y=pow(p[1]-q[1],2);
        z=pow(p[2]-q[2],2);
        x+=y+z;
        dis=sqrt(x);
    }
    double disp()
    {
        return dis;
    }
};
void shape()
{
    cout<<endl;
    for(int i=0;i<51;i++)
        cout<<"*";
    cout<<endl;
}
int main()
{
    shape();
    cout<<"A program to demonstrate multiple inheritance-:" ;
    shape();
    cout<<"Enter the points in the form of (x y z)";
    shape();
    third t;
    t.getp();
    shape();
    t.getq();
    t.dist();
    shape();
    cout<<"shortest distance between p1 and p2 ="<< t.disp();
    cout<<" units";
    shape();
    return 0;
}
