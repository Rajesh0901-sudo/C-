#include <iostream>

using namespace std;

class account
{
protected:
    string name;
    long ac_no;
    long balance;
    long deposite;
    long withdrawl;
    string check_book;
public:
    string account_type;
    void get()
    {
        cout<<"Enter costumers name(without surname)-";
        cin>>name;
        cout<<"account no.(in 10 digits)-";
        cin>>ac_no;
        cout<<"Welcome Mr. "<<name<<" in \"Rajesh corporation bank\"\n";
        cout<<"500$ has been added to your account-:";
    }
    void bal()
    {
        cout<<"\nyour current balance is-"<<balance<<"$";
    }

    void sete()
    {
        balance=500;
        deposite=0;
        withdrawl=0;
        if(account_type=="current"||account_type=="fd"||account_type=="FD")
                check_book="available";
        if(account_type=="saving")
                check_book="not available";
    }
    void ca()
    {
        cout<<"check book availability-"<<check_book;
    }
};
class s_ac : public account
{

public:
     void with()
    {
        cout<<"Enter amount to withdraw-";
        cin>>withdrawl;
        if(balance>=withdrawl)
        {
            cout<<"Transaction successful-:";
            balance-=withdrawl;
        }
        else
            cout<<"you have insufficient balance in your account-:";
    }
     void dep()
    {
        cout<<"Enter amount to deposit-";
        cin>>deposite;
        cout<<"Transaction successful-:";
        balance+=deposite;
    }
    void status()
    {
        cout<<"#Name- "<<name<<endl;
        cout<<"#Account no.- "<<ac_no<<endl;
        cout<<"#Account type- "<<account_type<<endl;
        cout<<"#Check book availability- "<<check_book<<endl;
        cout<<"#Last deposit- "<<deposite<<endl;
        cout<<"#Last withdrawal- "<<withdrawl<<endl;
        cout<<"#Current balance- "<<balance<<"$";
    }
};
class c_ac : public account
{
    long pen;
public:
     void with()
    {
        cout<<"Enter amount to withdraw-";
        cin>>withdrawl;
        if(balance>=withdrawl)
           {
            balance-=withdrawl;
            cout<<"Transaction successful-:";
           }
        else
            cout<<"you have insufficient balance in your account-:";
    }
     void dep()
    {
        cout<<"Enter amount to deposit-";
        cin>>deposite;
        cout<<"Transaction successful-:";
        balance+=deposite;
    }
    void penalty()
    {
        if(balance<500)
        {
            pen=100;
            balance-=pen;
            cout<<"\n100$ penalty is been deducted from your \naccount due to minimum account maintain-ens";
        }
    }
     void status()
    {
        cout<<"#Name- "<<name<<endl;
        cout<<"#Account no.- "<<ac_no<<endl;
        cout<<"#Account type- "<<account_type<<endl;
        cout<<"#Check book availability- "<<check_book<<endl;
        cout<<"#Last deposit- "<<deposite<<endl;
        cout<<"#Last withdrawal- "<<withdrawl<<endl;
        cout<<"#Current balance- "<<balance<<"$";
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
    int x;
    string t;
    shape();
    cout<<":-This is a program to open an bank account-:\n";
    shape();
    cout<<"    $Enter a type of account to open$\n\n";
    cout<<"\t  ||saving||current||\n\nEnter your choice-";
    cin>>t;

    if(t=="saving")
    {
        shape();
        s_ac s;
        s.account_type=t;
        s.get();
        s.sete();
        do
        {
            shape();
            cout<<"01-status\n";
            cout<<"02-balance\n";
            cout<<"03-withdraw\n";
            cout<<"04-deposit\n";
            cout<<"05-check book availability\n";
            cout<<"00-quit";
            cout<<"\nEnter your choice-";
            cin>>x;
            shape();
            switch(x)
            {
            case 01:s.status();break;
            case 02:s.bal();break;
            case 03:s.with();s.bal();break;
            case 04:s.dep();s.bal();break;
            case 05:s.ca();break;
            case 00:break;
            default:cout<<"Enter appropriate no.-:";

            }

        }
        while(x!=00);

    }
     else if(t=="current")
    {
        shape();
        c_ac c;
        c.account_type=t;
        c.get();
        c.sete();
        do
        {
            shape();
            cout<<"01-status\n";
            cout<<"02-balance\n";
            cout<<"03-withdraw\n";
            cout<<"04-deposit\n";
            cout<<"05-check book availability\n";
            cout<<"00-quit";
            cout<<"\nEnter your choice-";
            cin>>x;
            shape();
            switch(x)
            {
            case 01:c.status();break;
            case 02:c.bal(); break;
            case 03:c.with();c.penalty();c.bal();break;
            case 04:c.dep();c.bal();break;
            case 05:c.ca();break;
            case 00:break;
            default:cout<<"Enter appropriate no.-:";

            }

        }while(x!=00);

    }

    else
        cout<<"enter appropriate choice-:";

    shape();
    return 0;
}
