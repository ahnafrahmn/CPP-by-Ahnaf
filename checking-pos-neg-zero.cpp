#include<iostream>
#include<windows.h>
#include<unistd.h>

using namespace std;

int main()
{
    double sample;
    start:
    cout<<"\n Enter a number : ";
    cin>>sample;
    int option;
    if(sample<0){
        option=-1;
    } else if(sample>0){
        option=1;
    } else{
        option=0;
    }
    switch(option){
        case -1:
            cout<<"\n\n "<<sample<<" is negative.\n\n";
            break;
        case 1:
            cout<<"\n\n "<<sample<<" is positive.\n\n";
            break;
        case 0:
            cout<<"\n\n "<<sample<<" is zero.\n\n";
            break;
        default:
            cout<<"\n Invalid Input.\n\n";
            sleep(1.75);
            system("cls");
            goto start;
            break;
    }
    return 0;
}
