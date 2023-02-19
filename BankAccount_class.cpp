#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

#define TotalAccounts 500
static int totalTransactions=0;
bool exitProgram = false;

class BankAccount
{
      string  name,  address, accountNo="BA";
      int opt_accountType, opt_gender;
      double balance=0;
      int individualTransactions=0;
      public:
      void getData(int num)
      {
            cout<<" \t\t  Registration of a Bank Account \n\n";
            cout<<" Select account type :\n 1) Savings account \t 2) Current account \n : ";
            cin>>opt_accountType;
            cout<<" Enter your name : ";
            cin.ignore();
            getline(cin, name);
            cout<<" Sex :\n 1) Male \t 2) Female \t 3) Others \n : ";
            cin>>opt_gender;
            cout<<" Enter your address : ";
            cin.ignore();
            getline(cin, address);
            cout<<"\n You have to deposit a minimum amount of money to complete opening this bank account.\n How much would you like to deposit ? (in BDT)\n : ";
            cin>>balance;
            individualTransactions++;
            totalTransactions++;
            string tempStr = to_string(1000+num);
            accountNo = accountNo.append(tempStr);
            cout<<"\n\n Account registration has been successfully done! \n Your account number is : "<<accountNo<<endl;
      }
      void showData()
      {
            cout<<" Name : "<<name<<endl;
            if(opt_gender==1)
            {
                  cout<<" Sex  : Male"<<endl;
            }
            else if(opt_gender==2)
            {
                  cout<<" Sex  : Female"<<endl;
            }
            else{
                  cout<<" Sex  : Others"<<endl;
            }
            cout<<" Address : "<<address<<endl;
            if(opt_accountType==1)
            {
                  cout<<" Your account type is  : Savings account"<<endl;
            }
            else{
                  cout<<" Your account type is  : Current account"<<endl;
            }
            cout<<" Your current balance is "<<balance<<" BDT "<<endl;
            cout<<" Number of transactions : "<<individualTransactions<<endl;
            cout<<" Your account number is : "<<accountNo<<endl;
      }
      void deposit()
      {
            int tempBalance;
            cout<<" Enter the amout (in BDT) you want to deposit : ";
            cin>>tempBalance;
            balance += tempBalance;
            individualTransactions++;
            totalTransactions++;
            cout<<" Your current balance is "<<balance<<" BDT "<<endl;
      }
      void withdraw()
      {
            int tempBalance;
            cout<<" Enter the amout (in BDT) you want to withdraw : ";
            cin>>tempBalance;
            if(tempBalance>balance)
            {
                 cout<<" Insufficient balance! "<<endl; return;
            }
            balance -= tempBalance;
            individualTransactions++;
            totalTransactions++;
            cout<<" Your current balance is "<<balance<<" BDT "<<endl;
      }
      void updateData()
      {
            int opt_update;
            ask:
            cout<<" What do you want to change ?\n"
                        <<" 1) Name \n 2) Address \n : ";
            cin>>opt_update;
            switch(opt_update)
            {
            case 1:
                  cout<<" Enter new name : ";
                  cin.ignore();
                  getline(cin, name);
                  break;
            case 2:
                  cout<<" Enter new address : ";
                  cin.ignore();
                  getline(cin, address);
                  break;
            default:
                  cout<<" Invalid Input !!\n Try again! \n\n";
                  goto ask;
            }
      }
};

void head()
{
      cout<<"\n ..............................................................................................."<<endl
                  <<" ...............................................................................................\n"<<endl
                  <<" \t\t\t\t\t THE BANK \n"<<endl
                  <<" ..............................................................................................."<<endl
                  <<" ...............................................................................................\n\n"<<endl;
}
int options(BankAccount a)
{
      int opt;
      askOptions:
      cout<<"\n\n Please select any : \n"
                  <<" 1) Show my informations \n 2) Update information \n 3) Deposit \n 4) Withdraw \n 5) Register a new account \n 6) Exit \n : ";
      cin>>opt;
      switch(opt)
      {
      case 1:
            system("cls");
            head();
            a.showData();
            options(a);
            break;
      case 2:
            system("cls");
            head();
            a.updateData();
            system("cls");
            head();
            a.showData();
            options(a);
            break;
      case 3:
            system("cls");
            head();
            a.deposit();
            options(a);
            break;
      case 4:
            system("cls");
            head();
            a.withdraw();
            options(a);
            break;
      case 5:
            return 0;
      case 6:
            system("cls");
            head();
            cout<<"\n\t\t Thank you so much! \n\n\n";
            exitProgram=true;
            break;
      default:
            cout<<" Invalid Input !!\n Try again! \n\n";
            goto askOptions;
      }
}

int main()
{
      BankAccount accounts[TotalAccounts];       // Total Accounts = 500
      for(int i=0; i<TotalAccounts; i++)
      {
            system("cls");
            head();
            accounts[i].getData(i);
            int temp = options(accounts[i]);
            if(exitProgram)
            {
                  return 0;
            }
      }
}
