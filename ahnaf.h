#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#define ll long long
#define endl "\n"
#define fr(i,a,b) for(int i  = a ; i < b ; i++)
#define yy cout<<"YES"<<"\n";
#define loop(b) for(int i  = 0 ; i < b ; i++)
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
#define print(x) cout<<x;
#define input(y) cin>>y;

using namespace std;

//  IG - ahnaf.rahmn  ,   E-mail - ahnafx24@gmail.com

string takePassword() // this function takes password and hides every character while  typing password
{
      string password=""; char c;
      while(true)
      {
                  taking:
                  c = getch(); if(c == 8 && password.size()==0)continue; else if(c==13)break;
                  while(c == 8)
                  {
                        cout<<"\b \b";
                        password=password.substr(0, password.size()-1); goto taking;
                  }
                  cout<<c; usleep(130000); 
                  password+=c;
                  cout<<"\b*";
      }
      return password;
}

