#include<iostream>
#include<math.h>

using namespace std;

void deci2bi(int a){
    int i, temp, n=0, rem, bi=0;
    temp=a;
    while(temp!=0){
        temp/=2;
        n++;
    }
    temp=a;
    for(i=0; i<n; i++){
        rem = temp%2;
        bi = bi + (rem*pow(10, i));
        temp/=2;
    }
    cout<<"\n Binary : "<<bi<<"\n\n";
}
void bi2deci(int a){
    int i, temp, n=0, rem, deci=0;
    temp=a;
    while(temp!=0){
        temp/=10;
        n++;
    }
    temp=a;
    for(i=0; i<n; i++){
        rem = temp%10;
        deci = deci + (rem*pow(2, i));
        temp/=10;
    }
    cout<<"\n Decimal : "<<deci<<"\n\n";
}
int main(){
    int a, choice, choice2;
    cout<<" \n\t\t<<:: Number Conversion ::>>\n\n";
    start:
    cout<<" (1) Binary => Decimal \t (2) Decimal => Binary \n : ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<" Binary : ";
            cin>>a;
            bi2deci(a);
        break;
        case 2:
            cout<<" Decimal : ";
            cin>>a;
            deci2bi(a);
        break;
        default:
            cout<<" Invalid Input\n\n";
            goto start;
    }
    cout<<" (1) Calculate again \t (2) Exit \n : ";
    cin>>choice2;
    if(choice2==1){
        system("cls");
        main();
    } else if(choice2==2){
        system("cls");
        cout<<"\n\n\t Thank you so much !!\n\n";
    }
    return 0;
}
