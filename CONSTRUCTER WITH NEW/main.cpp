#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class str
{
    char *n;
    int l;
public:
    str()
    {
        l=0;
        n= new char[l+1];
    }
    str(char *s)
    {
        l=strlen(s);
        n= new char[l+1];
        strcpy(n,s);
    }
    void display()
    {
        cout<<"\nstring="<<n<<"\nlength="<<l<<endl;
    }
    void conn(str &a,str &b)
    {
        delete n;
        l=a.l+b.l;
        n=new char[l+1];
        strcpy(n,a.n);
        strcat(n,b.n);
    }

};


int main()
{
    char a[20];
    cout<<"enter a string-";
    gets(a);
    str s1(a),s2(" sahu"),s3(" ji"),s4,s5;
    s4.conn(s1,s2);
    s5.conn(s4,s3);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}
