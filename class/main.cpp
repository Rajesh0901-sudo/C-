#include <iostream>

using namespace std;
class two;
class one
{
    public:
    char name[20];
    int age;
    char subject[10];
    char clss[10];
    friend class two;

}o;

class two
{
    public:
    int hindi,english,maths,physics,computer;
    //friend class one;

    void calcdata()
    {
    int per;
    cout<<"\n\t\t\t\t\t\tstudents biodata-:";
    cout<<"\n  **Name       ="<<o.name;
    cout<<"\n  **Age        ="<<o.age;
    cout<<"\n  **Subject    ="<<o.subject;
    cout<<"\n  **Class      ="<<o.clss;
    per=(hindi+english+maths+physics+computer)/5;
    cout<<"\n  **Percent    ="<<per;
    }

}t;

int main()
{
    cout<<"enter the name of the student-";
    cin>>o.name;
    cout<<"\nenter students age-";
    cin>>o.age;
    cout<<"\nenter students subject-";
    cin>>o.subject;
    cout<<"\nenter sudents class-";
    cin>>o.clss;


    cout<<"\n\t\t\t\t\t\t\tenter the marks-:";
    cout<<"\nHindi-";
    cin>>t.hindi;
     cout<<"\nEnglish-";
    cin>>t.english;
     cout<<"\nMaths-";
    cin>>t.maths;
     cout<<"\nPhysics-";
    cin>>t.physics;
     cout<<"\nComputer-";
    cin>>t.computer;

    t.calcdata();
}
