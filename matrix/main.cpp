#include <iostream>

using namespace std;

class m
{
    int **p;
    int d1,d2;
public:
    m(int x,int y)
    {
        d1=x;
        d2=y;
        p=new int *[d1];
        for(int i=1;i<=d1;i++)
            p[i]=new int [d2];
    }
    void put(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int get(int i,int j)
    {
        return p[i][j];
    }
};
int main()
{
    int a,b,value;
    cout<<"enter size-:"<<endl;
    cin>>a>>b;
    m A(a,b);
    cout<<"\n enter elements-:\n";
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
    {
        cin>>value;
        A.put(i,j,value);
    }
     for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            cout<<A.get(i,j)<<" ";
            cout<<"\n";
        }


    return 0;
}
