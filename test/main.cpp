#include<iostream>
#include<conio.h>
void convert(int a);
void main()
{
int x;
clrscr();
cout<<"\n enter hour = ";
cin>>x;
cout<<"\n***after convertion ***";
convert(x);
getch();
}
void convert(int a)
{
int y;
y=a* 60;
cout<<"\nminut = "<<y;
}
