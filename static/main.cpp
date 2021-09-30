#include <iostream>


using namespace std;

class rajesh
{
    int a;
    static int b;
public:
    void show()
    {
        cout<<"\nstatic variable="<<b;
        cout<<"\nnormal variable="<<a;
    }
    void calc()
    {
        a=b;
        a++;
        b++;
    }
};
int rajesh::b;
int main()
{
    rajesh x1,x2,x3;
    cout<<"\nBefore calculation-:\n";
    for(int i=0;i<40;i++)
    {
        cout<<'#';
    }
    x1.show();          //this is to print a and b
    x2.show();
    x3.show();
    x1.calc();          //this is calculation
    x2.calc();
    x3.calc();
    cout<<"\n";
    for(int i=0;i<40;i++)
    {
        cout<<'#';
    }
    cout<<"\nafter calculation-:\n";
    for(int i=0;i<40;i++)
    {
        cout<<'#';
    }
    x1.show();
    x2.show();
    x3.show();
    cout<<"\n";
    for(int i=0;i<40;i++)
    {
        cout<<'#';
    }
    return 0;
}
