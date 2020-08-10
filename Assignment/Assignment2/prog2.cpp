// Creater a class name account
#include<iostream>
using namespace std;
    class Account{
    public:
    int accountbalance;
    Account(int balance)
    {
        if(balance>=0)
        accountbalance=balance;
        else
        {
        accountbalance=0;
        cout<<"Invalid Account balance "<<endl;
        }
    }
    void Credit(int balance)
    {
        accountbalance=accountbalance+balance;
    }
    void Debit(int balance)
    {
        if(balance>accountbalance)
        cout<<"Debit Amount exceeded account balance"<<endl;
        else
        accountbalance=accountbalance-balance;
    }
    int getAccountBalance()
    {
        return accountbalance;
    }
    };

    int main()
    {
        int amt1,credit1,debit1;
        cout<<"Enter account balance ,Credit and Debit for Account 1: "<<endl;
        cin>>amt1>>credit1>>debit1;
        Account A1(amt1);
        cout<<"Initial account balance for Account 1 is :"<<A1.getAccountBalance()<<endl;
        A1.Credit(credit1);
        cout<<"Account Balance after credit is :"<<A1.getAccountBalance()<<endl;
        A1.Debit(debit1);
        cout<<"Account Balance after Debit is :"<<A1.getAccountBalance()<<endl;

        int amt2,credit2,debit2;
        cout<<"Enter account balance ,Credit and Debit for Account 2: "<<endl;
        cin>>amt2>>credit2>>debit2;
        Account A2(amt2);
        cout<<"Initial account balance for Account 2 is :"<<A2.getAccountBalance()<<endl;
        A2.Credit(credit2);
        cout<<"Account Balance after credit is :"<<A2.getAccountBalance()<<endl;
        A2.Debit(debit2);
        cout<<"Account Balance after Debit is :"<<A2.getAccountBalance()<<endl;
        
    }



  