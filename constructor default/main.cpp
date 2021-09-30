#include <iostream>
#include<stdio.h>

using namespace std;

class IT
{
    long t,s;
    float r;
    char name[20];
    int age;
public:

    IT()
    {
        s=t=0;
        r=5;
    }
     ~IT(){}
     void tax()
     {
         long x=0,y=0,z=0;
         if(s<250000)
            x=0;
         if(s>250000)
         {
            if(s<500000)
                x=(s-250000)*r/100;
            else
            {
                if(s<1000000)
                    y=(s-500000)*2*r/100 +12500 ;
                else
                    z=(s-1000000)*6*r/100 + 12500 + 50000;
            }
         }
         t=x+y+z;
         t+=t/10;

     }
     void print()
     {
         cout<<"#NAME  -";puts(name);
         cout<<"#Age   -"<<age<<endl;
         cout<<"#salary-"<<s<<endl;
         cout<<"#Your income tax is="<<t<<"$";
     }
     void detail()
     {
         cout<<"Enter your name-";
         gets(name);
         cout<<"Enter your age-";
         cin>>age;
         cout<<"Enter your Annual income-:";
         cin>>s;
     }
};
void shape()
{
    cout<<endl;
    for(int i=0;i<51;i++)
        cout<<"_";
    cout<<endl;
}

int main()
{
    IT I;
    shape();
    cout<<"A program to calculate income tax with \"DEFAULT ARGUMENT\"";
    shape();
    I.detail();
    I.tax();
    shape();
    I.print();

    shape();
    return 0;
}
