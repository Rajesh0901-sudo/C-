#include <iostream>

using namespace std;

class time
    {
        int m;
        int h;
    public:
        void gettime()
            {

                    cout<<"\nhours-";
                    cin>>h;
                    cout<<"\nminutes-";
                    cin>>m;
                    cout<<"\n";
            }
        void showtime()
            {
                    cout<<"\ntime is-"<<h<<":"<<m<<endl;
            }

        void sum(time a,time b)
            {
                    m=a.m+b.m;
                    h=m/60;
                    m=m%60;
                    h=h+a.h+b.h;
                }
    };
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
    time x,y,z;

    cout<<"\n\t*time for object x*\n";
    x.gettime();
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }
    x.showtime();
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }
    cout<<"\n\t*time for object y*\n";
    y.gettime();
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }
    y.showtime();
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }
    cout<<"\n\t*for object x+y* \n";
    z.sum(x,y);
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }
    z.showtime();
        for(int i=0;i<50;i++)
        {
            cout<<"~";
        }

    quit();
    return 0;
}
