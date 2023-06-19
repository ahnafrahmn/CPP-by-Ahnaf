#include<iostream>

using namespace std;

int main()
{
    int a, *ptr;
    cout<<"\n Enter a number : ";
    cin>>a;
    ptr = &a;
    cout<<"\n value of a is "<<a<<endl;
    cout<<"\n Address of "<<a<<" is "<<&a<<endl;
    cout<<"\n Value of the pointer address is "<<*ptr<<endl;
    return 0;
}
