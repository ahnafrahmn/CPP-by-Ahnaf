#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define ll long long
#define endl "\n"
#define fr(i,a,b) for(int i  = a ; i < b ; i++)
#define yy cout<<"YES"<<"\n";
#define nn cout<<"NO"<<"\n";
#define pcnt cout<<cnt<<"\n";
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define setp(x, y) cout << fixed << setprecision(x) << y;
#define ss string s; cin>>s;
#define tt int t; cin>>t; while(t--)
#define en cout<<"\n";
#define print(a,n) for(ll i=0; i<n; i++)cout<<a[i]<<" ";
#define read(a,n) for(ll i=0; i<n; i++)cin>>a[i];
#define copy(a,b) for(ll i=0; i<a.size(); i++)b[i]=a[i];
#define anykey cout<<"\n\t(press any key to continue)", getch();
using namespace std;
//  IG - ahnaf.rahmn  ,   E-mail - ahnafx24@gmail.com  ,   ID - 22203203

static ll totalChannels=0;
void welcome();
void searchAccount(string);
void head();
class Videos;

class YTChannel
{
      string ownerName1, ownerName2, ownerName3, fullName, mail;
      vector <string> subscList;
      ll subsc=0, channelIndex=0;
public:
      string name, id;
      void createAccount();
      void showVideos();
      void accountInfo(bool);
};

void YTChannel :: createAccount()
{
      head();
      int opt; cout<<"\n Select your naming style :\n 1) firstname-middlename-lastname \n 2) firstname-lastname \n :>"; cin>>opt;
      if(opt==1)
      {
            head(); cout<<"\n Enter your first name : "; cin>>ownerName1; cout<<"\n Enter your middle name : "; cin>>ownerName2; cout<<"\n Enter your last name : "; cin>>ownerName3;
            fullName = ownerName1 + " " + ownerName2 + " " + ownerName3;
      }
      else{
            head(); cout<<"\n Enter your first name : "; cin>>ownerName1; cout<<"\n Enter your last name : "; cin>>ownerName3;
            fullName = ownerName1 + " " + ownerName3;
      }
      cout<<"\n Enter channel name : "; cin>>name;
      cout<<"\n Enter your e-mail : "; cin>>mail;
      channelIndex = totalChannels;
      string str = to_string(totalChannels);
      id = "ytaccNo"+str;
      totalChannels++;
}

void YTChannel :: accountInfo(bool x)
{
      int optSub; bool subsAlready=false, loopedAlready=false; lbl:
      cout<<"\n Channel Name : "<<name<<endl;
      cout<<"\n Owner Name : "<<fullName<<endl<<" E-mail : "<<mail<<endl<<" Channel ID : "<<id<<endl<<" Total Subscribers : "<<subsc<<endl;
      if(x)anykey
      else{
            if(loopedAlready&& !subsAlready)cout<<"\n You have successfully unsubscribed to \""<<name<<"\" ";
            if(!subsAlready){ cout<<"\n\n Do you want to Subscribe\n (1)YES \t (2)NO \n :>"; cin>>optSub; if(optSub==1){  subsc++; system("cls"); head(); subsAlready=true; goto lbl; }}
            else {
                        cout<<"\n You have successfully subscribed to \""<<name<<"\" \n\n";
                        cout<<"\n\n Do you want to Unsubscribe\n (1)YES \t (2)NO \n :>"; cin>>optSub; if(optSub==1){  subsc--; system("cls"); head(); subsAlready=false; loopedAlready=true; goto lbl; }
            }
      }
}

class Videos : public YTChannel
{
      public:
      vector <string> titles, shortTitles;
      void uploadVid()
      {
            int opt2; string vidT; head();
            cout<<" Select Category :\n 1) Shorts \n 2) Videos \n :>"; cin>>opt2; cin.ignore();
            if(opt2==1){
                  cout<<"\n Enter title of the short : "; getline(cin, vidT); shortTitles.push_back(vidT);
            }
            else { cout<<"\n Enter video title : "; getline(cin, vidT); titles.push_back(vidT); }
            cout<<"\n\t\t Video uploaded successfully! \n\n";
            anykey
      }
      void showVideos()
      {
            head(); cout<<"\n Channel : "<<name<<"\n\n Uploaded Videos : \n";
            for(int i=titles.size()-1; i>=0; i--)
            {
                  cout<<"\t~> "<<titles[i]<<endl;
            }
            cout<<"\t -------------------------------------------------------------------------------------\n";
            cout<<"\n Uploaded Shorts : \n";
            for(int i=shortTitles.size()-1; i>=0; i--)
            {
                  cout<<"\t~> "<<shortTitles[i]<<endl;
            }
            cout<<"\t -------------------------------------------------------------------------------------\n";
            anykey
      }
};

vector <Videos> obj;    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX>>>    array of objects
ll last = obj.size()-1;

void menu(Videos &o)
{
      Videos *x= &obj[obj.size()-1];
      int opt; string s;  label2: cout<<"\n 1) Create Account \t 2) Upload Videos \t 3) Search \t 4) Videos \n :>"; cin>>opt;
      if(totalChannels==0 && opt!=1)
      {
            head(); cout<<"\n Please create an account first! \n\n"; goto label2;
      }

      switch(opt)
      {
            case 1: o.createAccount();  obj.push_back(o); break;
            case 2: obj[obj.size()-1].uploadVid(); break;
            case 3: head();  cout<<"\n Enter the channel name you want to search \n :>"; cin>>s; searchAccount(s); break;
            case 4: obj[obj.size()-1].showVideos(); break;
      }
}

int main()
{
      int opt3;
      welcome();
      Videos o;
      label1:
            head(); menu(o); goto label1;
      return 0;
}

void searchAccount(string s)   //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX~->>>    function to search objects
{
      head();
      fr(i, 0, obj.size())
      {
            if(obj[i].name==s)
            {
                  bool own=false;
                  if(i==obj.size()-1)own=true;
                  obj[i].accountInfo(own);  obj[i].showVideos(); break;
            }
      }
}

void welcome()
{
      cout<<"\n\n\t\t\t\t\t WELCOME\n"; cout<<"\t\t\t\t\t   TO \n";
      Sleep(350); cout<<"\n\t\t\t\t\t Y"; Sleep(130); cout<<"o"; Sleep(130); cout<<"u"; Sleep(130); cout<<"T"; Sleep(130); cout<<"u"; Sleep(130); cout<<"b"; Sleep(130); cout<<"e \n\n\n"; Sleep(650);
}

void head()
{
      system("cls");
      cout<<"\n\n\n\t\t\t\t YouTube \n"; cout<<"\t-------------------------------------------------------------\n\n";
}
