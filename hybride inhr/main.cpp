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
        cout<<"enter three point a-";
        for(int i=0;i<3;i++)
        {
            cin>>p[i];
        }
    }
};
class second : public first
{
protected:
    int q[3];
public:
    void getq()
    {
        cout<<"enter three point b-";
        for(int i=0;i<3;i++)
        {
            cin>>q[i];
        }
    }

};
class multilevel_multiple
{
protected:
    int r[3];
public:
    void getr()
    {
        for(int i=0;i<3;i++)
        {
        cout<<"enter three points c-";
        cin>>r[i];
        }
    }
} ;
class third : public second,public multilevel_multiple
{
    int dis;
public:
    void dist()
    {
        int a=0,b=0,c=0,ab[3],bc[3];
        for(int i=0;i<3;i++)
        {
            ab[i]=q[i]-p[i];
            bc[i]=r[i]-q[i];
        }
        a=(ab[1]*bc[2])-(ab[2]*bc[1]);
        b=(ab[2]*bc[0])-(ab[0]*bc[3]);
        c=(ab[0]*bc[1])-(ab[2]*bc[0]);
        a=pow(2,a);
        b=pow(2,b);
        c=pow(2,c);
        dis=(int)((1/2)*sqrt(a+b+c));
    }
    int  disp()
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
    cout<<"A program to calculate the area of triangle generated\n\t\t by three points a,b,c-:\n";
    cout<<"To demonstrate multiple-multilevel (hybrid) inheritance-:" ;
    cout <<"\n\t\t\t  a  " <<endl;
    cout <<"\t\t\t / \\ " <<endl;
    cout <<"\t\t\tb - c" <<endl;
    shape();
    cout<<"Enter the points in the form of (x y z)";
    shape();
    third t;
    t.getp();
    shape();
    t.getq();
    shape();
    t.getr();
    t.dist();
    shape();
    cout<<"Area of triangle abc ="<< t.disp();
    cout<<" units";
    shape();
    return 0;
}
