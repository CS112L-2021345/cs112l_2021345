#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Bank_Account {

    protected:
    int ID;
    double balance;

    public:
    Bank_Account()
    {
        cout<<"THANK YOU FOR CREATING ACCOUNT!!";
        set_account();
        cout<<"Do you want to deposit any cash now?(y/Y for Yes n/N for No): ";
        char ch;
        cin>>ch;
        while(ch!='y' && ch!='Y' && ch!='z' && ch!='Z')
        {
            cout<<"INVALID COMMAND!! ENTER AGAIN: ";
            cin.ignore();
            cin>>ch;
        }


        if(ch=='y' || ch=='Y')
        {
            cout<<"Enter amount to deposit: ";
            cin>>balance;
        }

        else if(ch=='n' || ch=='N')
        {
            balance=0;
            cout<<"Account created";
        }
        
    }

    void set_account()
    {
        srand(time(0));
        ID=rand()%6779+30;
        cout<<"Your ID is: "<<ID<<endl;
    }

    void retrive()
    {
        cout<<"Account ID is: "<<ID<<endl;
        cout<<"Account balance is: "<<balance<<endl;
    }

    void deposit(double amount)
    {
        balance=balance+amount;
    }

    void widthraw(double amount)
    {
        if(balance<=amount)
        {
            balance=balance-amount;
        }

        else
        {
            cout<<"INSUFFICIENT BALANCE TO WIDTHRAW"<<endl<<"CURRENT BALANCE IS: "<<balance<<endl;
        }

    }

    ~Bank_Account()
    {

    }

};

class Checking_account: protected Bank_Account{

    private:
    int sc;
    float interest;
    int min;

    public:
    Checking_account()
    {
        interest=1.5;
        min=50000;
        sc=500;
    }

    Checking_account(const Checking_account &a)
    {
        sc=a.sc;
        interest=a.interest;
        min=a.min;
        ID=a.ID;
        balance=a.balance;
    }

    void set_interest()
    {
        string pass="AL_HABIB";
        cout<<"ONLY STAFF MEMBERS ARE ALLOWED TO USE THIS FEATURE!!"<<endl;
        cout<<"Enter Password for authentication: ";
        string word;

        cin.ignore();
        getline(cin,word);

        if(pass.compare(word)==0)
        {
            cout<<"ACCESS ALLOWED "<<endl<<"ENTER NEW INTEREST RATE: ";
            cin>>interest;
        }
        else
            cout<<"ACCESS DENIED";
    }

    void retrive_interest()
    {
        cout<<"Interest charges are: "<<interest<<"%"<<endl;
    }

    void retrive_service_charges()
    {
        cout<<"Service charges are: "<<sc<<endl;
    }

    void set_service()
    {
        string pass="AL_HABIB";
        cout<<"ONLY STAFF MEMBERS ARE ALLOWED TO USE THIS FEATURE!!"<<endl;
        cout<<"Enter Password for authentication: ";
        string word;

        cin.ignore();
        getline(cin,word);

        if(pass.compare(word)==0)
        {
            cout<<"ACCESS ALLOWED "<<endl<<"ENTER NEW SERVICE CHARGES: ";
            cin>>sc;
        }
        else
            cout<<"ACCESS DENIED";
        
    }

    void set_min_val()
    {
        string pass="AL_HABIB";
        cout<<"ONLY STAFF MEMBERS ARE ALLOWED TO USE THIS FEATURE!!"<<endl;
        cout<<"Enter Password for authentication: ";
        string word;

        cin.ignore();
        getline(cin,word);

        if(pass.compare(word)==0)
        {
            cout<<"ACCESS ALLOWED "<<endl<<"ENTER NEW MINIMUM BALANCE FOR SERVICE CHARGES: ";
            cin>>min;
        }
        else
            cout<<"ACCESS DENIED";

    }

    void retrive_min_val()
    {
        cout<<"Minimum balance for service charges is: "<<min<<endl;
    }

    void post_inter()
    {
        if(balance>min)
        {
        cout<<"Balance before interest: "<<balance<<endl;
        balance=balance-(float)((interest/100)*balance);
        cout<<"Balance after interest: "<<balance<<endl;
        }

        else if(balance ==0)
        {
            cout<<"Empty account"<<endl;
        }

        else 
        {
            cout<<"Balanace before service charges is: "<<balance<<endl;
            balance=balance-sc;
            cout<<"Balance after service charges is: "<<balance<<endl;

        }
    }

    void retrive()
    {
           cout<<"Account ID is: "<<ID<<endl; 
           cout<<"Account balance is: "<<balance<<endl;
           cout<<"Interest rate is: "<<interest<<endl;
           cout<<"Service charges are: "<<sc<<endl;
    }

    void deposit(double amount)
    {
        balance=balance+amount;
        cout<<"TRANSECTION SUCCESSFUL!!"<<endl<<"Your current balance is: "<<balance<<endl;
    }

    void widthraw(double amount)
    {
        if(balance>=amount)
        {
            cout<<"TRANSECTION SUCCESSFUL"<<endl;
            balance=balance-amount;
            cout<<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
        }

        else
        {
            cout<<"INSUFFICIENT BALANCE TO WIDTHRAW"<<endl<<"CURRENT BALANCE IS: "<<balance<<endl;
        }

    }

    ~Checking_account()
    {

    }

};

class saving_account: protected Bank_Account{

    private:
    float interest;

    public:
    saving_account()
    {
        interest=1.5;
    }

    saving_account(const saving_account &a)
    {
        interest=a.interest;
        ID=a.ID;
        balance=a.balance;
    }

    int get_ID()
    {
        return ID;
    }

    void set_inter()
    {
        string pass="AL_HABIB";
        cout<<"ONLY STAFF MEMBERS ARE ALLOWED TO USE THIS FEATURE!!"<<endl;
        cout<<"Enter Password for authentication: ";
        string word;
        cin.ignore();
        getline(cin,word);

        if(pass.compare(word)==0)
        {
            cout<<"ACCESS ALLOWED "<<endl<<"ENTER NEW INTEREST RATE: ";
            cin>>interest;
        }
        else
            cout<<"ACCESS DENIED";
    }

    void post_inter()
    {
        if(balance>0)
        {
            cout<<"Balance before interest: "<<balance<<endl;
            balance= balance-(float)balance*(interest/100);
            cout<<"Balance after interest: "<<balance;
        }

        else
        {
            cout<<"Empty account"<<endl;
        }
    }

    void retrive()
    {
        cout<<"Account ID is: "<<ID<<endl;
        cout<<"Account balance is: "<<balance<<endl;
    }

    void deposit(double amount)
    {
        balance=balance+amount;
    }

    void widthraw(double amount)
    {
        if(balance>=amount)
        {
            cout<<"TRANSECTION SUCCESSFUL"<<endl;
            balance=balance-amount;
            cout<<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
        }

        else
        {
            cout<<"INSUFFICIENT BALANCE TO WIDTHRAW"<<endl<<"CURRENT BALANCE IS: "<<balance<<endl;
        }

    }

    void retrive_interest()
    {
        cout<<"Interest charges are: "<<interest<<"%"<<endl;
    }

    ~saving_account()
    {
        
    }

};

int main()
{
    string num;
    cout<<"WELCOME TO BANK AL-HABIB LIMITED"<<endl;
    cout<<"Enter a number to perform the designated command: "<<endl;
    cout<<"Press 1. to open a checking Account"<<endl;
    cout<<"Press 2. to open a savings Account"<<endl;
    cout<<"Enter a number: ";
    cin>>num;

    while(num!="1" && num!="2")
    {
        cout<<"INVALID COMMAND!!! ENTER AGAIN: ";
        cin>>num;
    }

    if(num=="1")
    {
            string n;
            Checking_account c;

        while(1)
        {
            cout<<endl<<"Press 1. to check interest rate"<<endl;
            cout<<"Press 2. to check service charges"<<endl;
            cout<<"Press 3. to check minimum amount for service charges"<<endl;
            cout<<"Press 4. to deposite money"<<endl;
            cout<<"Press 5. to widthraw money"<<endl;
            cout<<"Press 6. to set new interest rate"<<endl;
            cout<<"Press 7. to set new service charges rates"<<endl;
            cout<<"Press 8. to set new minimm amount for service charges"<<endl;
            cout<<"Press 9. to check balance post-interest"<<endl;
            cout<<"Press 10. to check information of account"<<endl;
            cout<<"Press 11. to EXIT"<<endl;
            cout<<"Enter a number: ";
            cin>>n;

            while(n!="1" && n!="2" && n!="3" && n!="4" && n!="5" && n!="6" && n!="7" && n!="8" && n!="9" && n!="10" && n!="11" && n!="12")
            {
                cout<<"INVALID COMMAND!! ENTER AGAIN: ";
                cin>>n;
            }

            if(n=="1")
            {
                c.retrive_interest();
                system("pause");
                system("CLS");
            }

            if(n=="2")
            {
                c.retrive_service_charges();
                system("pause");
                system("CLS");
            }

            if(n=="3")
            {
                c.retrive_min_val();
                system("pause");
                system("CLS");
            }

            if(n=="4")
            {
                int money;
                cout<<"Enter amount to deposit: ";
                cin>>money;
                c.deposit(money);
                system("pause");
                system("CLS");
            }

            if(n=="5")
            {
                double money;
                cout<<"Enter amount to widthraw: ";
                cin>>money;
                c.widthraw(money);
                system("pause");
                system("CLS");
            }

            if(n=="6")
            {
                c.set_interest();
                system("pause");
                system("CLS");
            }

            if(n=="7")
            {
                c.set_service();
                system("pause");
                system("CLS");
            }

            if(n=="8")
            {
                c.set_min_val();
                system("pause");
                system("CLS");
            }

            if(n=="9")
            {
                c.post_inter();
                system("pause");
                system("CLS");
            }

            if(n=="10")
            {
                c.retrive();
                system("pause");
                system("CLS");
            }

            if(n=="11")
                break;
        }

    }

    if(num=="2")
    {
        string n;
        saving_account c;

        while(1)
        {
            cout<<"Press 1. to check interest rate"<<endl;
            cout<<"Press 2. to set interest rate"<<endl;
            cout<<"Press 3. to widthraw money"<<endl;
            cout<<"Press 4. to deposit money"<<endl;
            cout<<"Press 5. to check balance post interest"<<endl;
            cout<<"Press 6. to view information of account"<<endl;
            cout<<"Press 7. to EXIT"<<endl;
            cout<<"Enter a number: ";
            cin>>n;

            while(n!="1" && n!="2" &&n!="3" &&n!="4" &&n!="5" &&n!="6" &&n!="7")
            {
                cout<<"INVALID COMMAND!! ENTER AGAIN: ";
                cin>>n;
            }

            if(n=="1")
            {
                c.retrive_interest();
                system("pause");
                system("CLS");
            }

            if(n=="2")
            {
                c.set_inter();
                system("pause");
                system("CLS");
            }

            if(n=="3")
            {
                int money;
                cout<<"Enter amount to widthraw: ";
                cin>>money;
                c.widthraw(money);
                system("pause");
                system("CLS");
            }

            if(n=="4")
            {
                double money;
                cout<<"Enter amount to deposit: ";
                cin>>money;
                c.deposit(money);
                system("pause");
                system("CLS");
            }

            if(n=="5")
            {
                c.post_inter();
                system("pause");
                system("CLS");
            }

            if(n=="6")
            {
                c.retrive();
                system("pause");
                system("CLS");
            }

            if(n=="7")
                break;
                
        }
    }


    cout<<"THANK YOU FOR VISITING BANK AL_HABIB";
    return 0;
}