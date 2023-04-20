#include<bits/stdc++.h>
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
//  IG - ahnaf.rahmn  ,   E-mail - ahnafx24@gmail.com

int main()
{
      int n; cin>>n;
      int a[n], temp=0; read(a, n)
      fr(i, 0, n)
      {
            fr(j, i+1, n)
            {
                  if(a[i]>a[j]){ temp=a[j], a[j]=a[i], a[i]=temp; }
            }
      }
      print(a, n)
      return 0;
}
