#include <iostream>

using namespace std;

int fact(int a)
{
    if(a>1)
    {
       return a=a*fact(a-1);
    }
    else

    {
        return 1;
    }

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
    int a;
    cout<<"enter a no.a=";
    cin>>a;
    for(int i=0;i<50;i++)
    {
        cout<<"^";
    }
    cout<<"\nfactorial a!="<<fact(a)<<endl;
    for(int i=0;i<50;i++)
    {
        cout<<"^";
    }
    quit();

}
