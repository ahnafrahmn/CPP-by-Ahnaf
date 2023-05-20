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

int places=3;
bool rangeStatus=false;
float a, b, c, d, e, m=0, n=1;

float functionType1(float x)
{
      float y=a*pow(x, 3) + b*pow(x, 2) + c*x + d; return y;
}
float functionType2(float x)
{
      float y=a*pow(x, 2) + b*x + c; return y;
}

void table(float m, float n, float p, float q, float temp1, float temp2)
{
      system("cls");
      if(p<0)
      {
            cout<<left<<setw(10)<<"\n\n\t i "<<left<<setw(17)<<" a(-) "<<left<<setw(20)<<" b(+) "<<left<<setw(35)<<"xi={a*f(b)-b*f(a)}/{f(b)-f(a)}"<<left<<setw(10)<<" f(xi) "<<endl;
            cout<<"-------------------------------------------------------------------------------------------------------\n";
            int i;
            float preTemp;
            for(i=1; i>0; i++)
            {
                  cout<<"\t "<<left<<setw(5)<<i <<left<<setw(20)<<m<<left<<setw(25)<<n<<left<<setw(30)<<temp1<<left<<setw(10)<<temp2<<"\n\n";
                  int s=trunc(temp1*pow(10, places)), t=trunc(preTemp*pow(10, places));
                  if(s==t)break;
                  preTemp=temp1;
                  if(temp2<0)m=temp1; else n=temp1;
                  p=functionType1(m), q=functionType1(n);
                  temp1 = (m*q-n*p)/(q-p), temp2 = functionType1(temp1);
            }
            int temp=trunc(temp1*pow(10, places));
            cout<<"\n\t Here, x"<<i-1<<" = x"<<i<<" correct to "<<places<<" decimal places, \n\t So the root is x = "<<fixed<<setprecision(places)<<temp/pow(10, places)<<"\n\n\n";
      }
}

void rootType1()
{
      float p=functionType1(m), q=functionType1(n);
      cout<<"\n\n Let, \n f(x) = "<<a<<"x^3 + "<<b<<"x^2 + "<<c<<"x + "<<d<<" = 0 \n"
                  <<" f("<<m<<") = "<<a<<"*"<<m<<"^3 + "<<b<<"*"<<m<<"^2 + "<<c<<"*"<<m<<" + "<<d<<" = "<<p<<"\n"
                  <<" f("<<n<<") = "<<a<<"*"<<n<<"^3 + "<<b<<"*"<<n<<"^2 + "<<c<<"*"<<n<<" + "<<d<<" = "<<q<<"\n";
      if(rangeStatus){ if((p>0 && q>0)||(p<0 && q<0))cout<<"\n There maybe exists a root or maybe not.\n"; }
      else{
            loop1:
                  if(m>50){cout<<"\n\t Error!!\n\n"; return;}
            if((p>0 && q>0)||(p<0 && q<0)){
                  m++, n++;
                  cout<<" f("<<m<<") = "<<a<<"*"<<m<<"^3 + "<<b<<"*"<<m<<"^2 + "<<c<<"*"<<m<<" + "<<d<<" = "<<p<<"\n"
                              <<" f("<<n<<") = "<<a<<"*"<<n<<"^3 + "<<b<<"*"<<n<<"^2 + "<<c<<"*"<<n<<" + "<<d<<" = "<<q<<"\n";
                  goto loop1;
            }
      }
      float temp1 = (m*q-n*p)/(q-p), temp2 = functionType1(temp1);
      if(p<0){ cout<<"\n Since, f("<<m<<") < 0 and f("<<n<<") > 0. \n So, f(x) has at least one root lies between a = "<<m<<", b = "<<n<<"\n "; }
      else { cout<<"\n Since, f("<<m<<") > 0 and f("<<n<<") < 0. \n So, f(x) has at least one root lies between a = "<<m<<", b = "<<n<<"\n "; }
      cout<<" The approximation of the root is x1 = { a*f(b) - b*f(a) } / { f(b) - f(a) } = "<<temp1<<"\n f(x1) = "<<temp2<<"\n";
      if(temp2>0)n=temp1; else m=temp1;
      cout<<"\n\n So, root lies between a = "<<m<<", b = "<<n<<"\n The process is repeated and calculation of the successive approximation roots are shown in the following table : \n\n";
      table(m, n, p, q, temp1, temp2);
}

int main()
{
      int opt1, opt2;
      cout<<"\n\n\t Select : \n\t  1) ax^3 + bx^2 + cx + d = 0 \t 2) ax^2 + bx + c = 0 \n\t :> "; cin>>opt1;
      switch(opt1)
      {
            case 1: cout<<"\n\t Enter the coefficients and constant \n\t(ax^3 + bx^2 + cx + d = 0, here a, b, c are the coefficients and d is the constant.)\n\t a = "; cin>>a;
                        cout<<"\t b = "; cin>>b; cout<<"\t c = "; cin>>c; cout<<"\t d = "; cin>>d; break;
            case 2: cout<<"\n\t Enter the coefficients and constant \n\t(ax^2 + bx + c = 0, here a, b are the coefficients and c is the constant.)\n\t a = "; cin>>a;
                        cout<<"\t b = "; cin>>b; cout<<"\t c = "; cin>>c; break;
      }
      cout<<"\n\t Have any range ?\n\t 1) YES \t 2) NO \n\t :> "; cin>>opt2;
      switch(opt2)
      {
            case 1: rangeStatus=true; cout<<"\n\t Enter range :\n\t m = "; cin>>m; cout<<"\t n = "; cin>>n; break;
      }
      cout<<"\n\t Correct to how many decimal places ? \t :> "; cin>>places;
      system("cls");
      rootType1();
      return 0;
}
