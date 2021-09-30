#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

void shape()
{
    cout<<endl;
    for(int i=0;i<61;i++)
        cout<<"_";
    cout<<endl;
}

int main()
{
    char c='c',name[5][20]={"Rajesh sahu","Pramod sahu","Gulshan sahu"};
    char cls[5][20]={"Bsc 2nd year","Bsc 2nd year","Bsc 2nd year"};
    char rollno[5][20]={"2271","2263","2254"};
    int i,flag=3;
    float per[5]={91.528,88.26,90.8};
    shape();
    cout<<"A program to demonstrate formatted console operations-:";
    shape();
    cout.width(20);cout<<":-Name-:";
    cout.width(20);cout<<":-Class-:";
    cout.width(20);cout<<":-Roll No-:";
    cout.width(20);cout<<"percent";cout<<endl;
    for(i=0;i<flag;i++)
    {
        cout<<setw(20)<<name[i];
        cout.width(20);cout<<cls[i];
        cout.width(20);cout<<rollno[i];
        cout.precision(3);cout<<setw(20)<<per[i]<<endl;
    }
    shape();
    return 0;
}
