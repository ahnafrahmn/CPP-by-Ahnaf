#include<iostream>
#include<unistd.h>
#include<conio.h>
using namespace std;
const int sizeM=2;
string takePassword()
{
      string password="";
      char c;
      while(c != 13)
      {
            if(password.size())
            {
                  usleep(130000);
                  printf("\b*");
            }
            c = getch();
            while(c == 8)
            {
                  printf("\b \b");
                  c = getch();
            }
            cout<<c;
            password+=c;
      }
      return password;
}

class Bank
{
      string ownerName, accountNumber, password;
      int balance=5000, interestRate;
      public:
      void getInfo()
      {
            cout<<"\n Enter your name : "; cin>>ownerName;
            cout<<" Enter your ID : "; cin>>accountNumber;
            cout<<" Interest Rate : "; cin>>interestRate;
            cout<<" Set your password : "; password=takePassword();
      }
      void showInfo()
      {
            cout<<"\n Name : "<<ownerName
                        <<"\n Interest Rate : "<<interestRate
                        <<"\n Balance : "<<balance
                        <<"\n Account Number : "<<accountNumber<<endl;
      }
      friend bool searchAccount(string num);
      friend void balanceTransfer(string num, string num2, int amount);
};
Bank obj[sizeM];

bool searchAccount(string num)
{
      for(int i=0; i<sizeM; i++)if(obj[i].accountNumber==num)return true;
}

void balanceTransfer(string num, string num2, int amount)
{
      int j; for(j=0; j<sizeM; j++)if(obj[j].accountNumber==num2)break;
      string temp;
      if(obj[j].balance<amount)cout<<"\n Insufficient Balance!!\n\n";
      else for(int i=0; i<sizeM; i++)
                  if(obj[i].accountNumber==num)
                  {
                         int cnt=0;
                         mark:
                         if(cnt==3){ cout<<"\n Sorry you cannot transfer!"; break; }
                         cout<<"\n Enter your password to transfer amount : "; temp=takePassword();
                         if(temp==obj[i].password){
                               obj[j].balance+=amount;
                               obj[i].balance-=amount;
                               obj[i].showInfo(); obj[j].showInfo();
                         } else {cout<<"\n Wrong Password!! Try again!\n ";cnt++;  goto mark;}
                  }
}

int main()
{
      cout<<"\n\n\t\t  Bank \n\n";
      cout<<"\n Opening bank account \n";
      for(int i=0; i<sizeM; i++)
      {
            cout<<"\n Account No : "<<i+1;
            obj[i].getInfo();
      }
      cout<<"\n\n =============================================================== \n\n";
      for(int i=0; i<sizeM; i++)
      {
            cout<<"\n Account No : "<<i+1;
            obj[i].showInfo();
      }
      cout<<"\n\n =============================================================== \n\n";
      cout<<"\n Transfering  Balance \n Transfering From (Enter Account Number) : "; string num; cin>>num;
      cout<<"\n Transfer amount : "; int amount; cin>>amount;
      cout<<" Transfering To (Enter Account Number) : "; string num2; cin>>num2;
      balanceTransfer(num, num2, amount);

      return 0;
}
