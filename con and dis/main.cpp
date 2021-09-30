#include <iostream>

using namespace std;
int c=0;
class demon
{
public:

    demon()
    {
        c++;
        cout<<"\nobject created in block-"<<c;
    }
    ~demon()
    {
        cout<<"\nobject destroyed in block-"<<c;
        c--;
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
    cout<<"A program to demonstrate the funtionality of\n\t\"CONSTRUCTOR AND DESTRUCTOR\"";
    shape();
    cout<<"## A constructor is called by compiler when ##\n\t\t\"object is created\".";
    shape();
    cout<<"This is the main(1) block-:";
    demon d1;
    {
        shape();
        cout << "This is block-2";
        {
            demon d2;
            shape();
            {
                cout << "This is block-3";
                demon d3;
                shape();
                cout<<" ##A destructor is called by compiler when ##\n\t\"object goes out of the scope\".";
                shape();
            }
        shape();
        }
    }
    shape();

    return 0;
}
