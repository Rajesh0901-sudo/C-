#include <iostream>

using namespace std;

int main()
{
   int x=100;
   {
       cout<<x<<endl;
       int x=200;
       {
           cout<<x<<endl;
        int x=300;
        {
            cout<<x<<endl;
        }
       }
   }
    cout<<x;

}
