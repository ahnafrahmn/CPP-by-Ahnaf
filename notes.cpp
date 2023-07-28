#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
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
#define anykey cout<<"\n\t(press any key to continue)\n", getch();
using namespace std;
//  IG - ahnaf.rahmn  ,   E-mail - ahnafx24@gmail.com





class A
{
protected:
      int m, n;
public:
      void get()
      {
            cout<<"\n Enter 2 integers : "; cin>>m>>n;
      }
      void mul()
      {
            cout<<" Multiplication : "<<m*n<<endl;
      }
};

class B : public A
{
public :
      void show()
      {
            get();
            cout<<"\n The numbers were "<<m<<" and "<<n<<"\n Sum : "<<m+n<<endl;
      }
};

class C : public A, public B
{

};

int main()
{
      C c;
      c.show();
      c.B::mul();
      return 0;
}
















/*




-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
************************************************************************************************************************************
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                                                            ALL NOTES OF PRACTICE IN C++

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
************************************************************************************************************************************
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                          SWAPPING::

      int temp;               temp=0,             a=10,       b=5
      temp = a;               temp=10,          a=10,       b=5
      a = b;                        temp=10,        a=5,         b=5
      b = temp;               temp = 10,        a=5,         b=10

                                                REFERENCE::


int main()
{
      int a = 10;
      int *b = &a; //  &a = address of a
      cout<<a<<endl;
      cout<<&a<<endl;
      cout<<b<<endl;    // for this case b is reference
     return 0;
}



                                                :: array of objects ::
                                                ----------------------

class xyz{
      string name;      // private member
public:
      int age;     // public member

      void data_naw(string s, int a)      // function for taking input
      {
                  name = s;
                  age = a;
      }
      void data_dekhaw();     // declaired but not defined
};

void xyz :: data_dekhaw()     // now defined
{
      cout<<" The name is " <<name<<"\n the age is "<<age;
}

int main()
{
      xyz obj[5];

      string str;
      int x;
      for(int i=0; i<5; i++)
      {
            cout<<i+1<<")\n";
            cin>>str>>x;
            obj[i].data_naw(str, x);
      }

      for(int i=0; i<5; i++)
      {
            cout<<i+1<<")\n";
            obj[i].data_dekhaw();
            cout<<endl;
      }
     return 0;
}


                                                :: Constractor ::
                                                ---------------------

            1> special function (it doesn't need to be called, its called automatically whenever an object is created)
            2> constractor name must has to be same with the class name
            3> it has to be written in public section
            4> it doesn't have any return type ( no int , no void.....)


                                                :: Access Spacifier ::
                                                ----------------------


                                    1. Private          2. Public        3. Protected
                                       -------             ------            -------



                                        :: input string with whitespace ::
                                        ----------------------------------

int main(){
    string fullname;
    cout<<"\n What is your full name ?\n : ";
    getline(cin, fullname);                      // taking full line as input
    cout<<" Welcome, "<< fullname <<" sir !!";
    return 0;
}

                                            :: Reference Variables ::
                                            -------------------------

int main(){
    int a = 4;
    int &b = a; // b will be caring the value of a;

    cout<<"\n The value of a = "<< a <<"\t\t The value of b = "<< b;
    b = 7;

    cout<<"\n The value of a = "<< a <<"\t\t The value of b = "<< b; // here, both a and b will be 7. Cause we changed b.
    a = 11;

    cout<<"\n The value of a = "<< a <<"\t\t The value of b = "<< b; // So, we can say that if we change any of their value it'll be
                                                                    //  changed for both of them.
    return 0;
}


                                                :: Typecasting ::
                                                -----------------

int main(){
    int a = 2;
    float b = 3.4;
    cout<<"\n The value of a + b is "<< a + b;
    cout<<"\n The value of a + b is "<< a + int(b); // here, b was 3.4 and we have changed it into an integer
    cout<<"\n The value of a + b is "<< a + (int)b; // so it'll be 3
    return 0;
}
                                            :: Call by reference ::
                                            -----------------------

----------// call by reference using pointers

void swapping(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=5, b=7;
    cout<<"\n the value of a = "<<a<<" the value of  = "<<b<<endl;
    swapping(&a, &b);
    cout<<"\n the value of a = "<<a<<" the value of  = "<<b<<endl;
    return 0;
}

----------// call by reference using reference variables

void swapping(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=5, b=7;
    cout<<"\n the value of a = "<<a<<" the value of  = "<<b<<endl;
    swapping(a, b);
    cout<<"\n the value of a = "<<a<<" the value of  = "<<b<<endl;
    return 0;
}

                                            :: Return by reference ::
                                            -------------------------

int &max_num(int &a, int &b){
    if(a>b){
        b = 0;
        return a; // if a is bigger than b, a will be 100 and b will be 0.
    }else{
        a = 0;
        return b; // if b is bigger than a, b will be 100 and a will be 0.
    }
}

int main(){
    int a=2, b=7;

    max_num(a, b)= 100; // it'll put the 100 into the variable with higher value.

    cout<<"\n the value of a = "<<a<<"\n the value of b = "<<b<<endl;
    return 0;
}



                                            :: Basics of Class and Object ::
                                            -------------------------------


class person{         // person --> className.
    public:         // Access Spacifier.
    string name;
    int siblings;    // name,siblings,gender --> Data-Member
    string gender;
    string sub;
};

int main()
{
    mohima.name = "Mohima Rahman";
    mohima.siblings = 0;
    mohima.gender = "Female/Shemale";
    mohima.sub = "CSE";

    ahnaf.name = "Md Ahnafur Rahman";
    ahnaf.siblings = 1;
    ahnaf.gender = "Sakht Launda!";
    ahnaf.sub = "CSE";

    person mohima, ahnaf;     // mohima, ahnaf -->> object name

    cout<<"\n What is your subect ? \n: ";
    cin>>mohima.sub;

    cout<<" \n\n you read in "<<mohima.sub<<endl;

    return 0;
}


                                                        :: Function Over-Loading ::
                                                        ---------------------------

int area(int a){  // a = one side of a square size box
    return a*a;  // area = a*a
}

int area(int a, int b){  // a = length, b = width of a rectangular size box
    return a*b;  // area = a*b
}

int main()
{
    cout<<"Area of a square : "<<area(5)<<endl;
    cout<<"Area of a Reactangular : "<<area(5, 2)<<endl;
    return 0;
}

                                                        :: Inheritence ::
                                                        -------------------


class A
{
protected:
      int m, n;
public:
      void get()
      {
            cout<<"\n Enter 2 integers : "; cin>>m>>n;
      }
      void mul()
      {
            cout<<" Multiplication : "<<m*n<<endl;
      }
};

class B : public A
{
public :
      void show()
      {
            get();
            cout<<"\n The numbers were "<<m<<" and "<<n<<"\n Sum : "<<m+n<<endl;
      }
};

class C : public A, public B
{

};

int main()
{
      C c;
      c.show();
      c.B::mul();
      return 0;
}




*/
