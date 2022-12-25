#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"\n Enter three values: ";
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        cout<< a<<" is the biggest\n";
    } else if(b>=a && b>=c){
        cout<< b<<" is the biggest\n";
    } else if(c>=a && c>=b){
        cout<< c<<" is the biggest\n";
    }
    return 0;
}
