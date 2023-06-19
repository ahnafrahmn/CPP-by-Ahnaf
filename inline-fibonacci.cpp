#include<iostream>
using namespace std;

inline void fib(int n)
{
    int a=0, b=1, c;
    cout<<"\n Fibonacci Series : ";
    for(int i=0; i<n; i++){
        cout<<" "<<a<<",";
        c = a+b;
        b = a;
        a = c;
    }
    cout<<"\b.\n\n";

}
int main()
{
    int a;
    cout<<"\n Enter the amount of elements : ";
    cin>>a;
    fib(a);
    return 0;
}
