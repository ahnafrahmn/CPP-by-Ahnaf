#include<iostream>

using namespace std;

int main(){
    int num, row, i, j, k, l;
    cout<<"\n Enter a value: ";
    cin>>num;
    row = 2*num;
    cout<<"\n\n";
    for(i=0; i<row; i++){
        if(i<num){
            for(j=0; j<=i; j++){
                cout<<" *";
            }
            for(k=2*i; k<(row-2); k++){
                cout<<"  ";
            }
            for(l=0; l<=i; l++){
                cout<<" *";
            }
            cout<<endl;
        } else{
            for(j=0; j<row-i; j++){
                cout<<" *";
            }
            for(k=row; k<2*i; k++){
                cout<<"  ";
            }
            for(l=0; l<row-i; l++){
                cout<<" *";
            }
            cout<<endl;
        }
    }
    return 0;
}
