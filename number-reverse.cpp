#include<iostream>
using namespace std;

int main()
{
    int num, rem;
    cout<<"\n Enter a number : ";
    cin>>num;
    cout<<"\n Reversed number : ";
    for(int temp=num; temp!=0; temp /= 10){
        cout<<temp%10;
    }
    return 0;
}
