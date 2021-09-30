#include <iostream>

using namespace std;

class Demo
{
    private:
        int X;
        int Y;
    public:
        Demo (int a, int b);
        void Input();
        void Display();

};

Demo:: Demo(int a, int b)
{
    X = a;
    Y = b;
}

void Demo:: Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}

void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}

 void shape()
 {
     cout<<endl;
     for(int i=0;i<51;i++)
     {
     cout<<"~";
     }
     cout<<endl;
 }
 void quit()
 {
     int a;
     cout<<"enter 0 to quit-";
     cin>>a;
     if(a==0)
        cout<<"\nprogram terminated successfully-:";
     else
        quit();
 }
int main()
{
    cout<<"\nA program to demonstrate parameterized constructor-:";
    shape();
    Demo d(10,20) ;
    cout << endl <<"Method 1: " << endl;
    cout << "Value after initialization: " ;
    d.Display();
    shape();
    d.Input();
    shape();
    cout << "Value after User Input : ";
    d.Display();
    shape();
    Demo d1 = Demo(10,20);
    cout << endl << "Method 2: " << endl;
    cout << "Value after initialization: ";
    d1.Display();
    shape();
    quit();
    return 0;
}
