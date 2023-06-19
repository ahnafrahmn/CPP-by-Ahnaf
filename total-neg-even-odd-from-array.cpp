#include<iostream>
using namespace std;

int main()
{
    int arr_size, neg=0, even=0, odd=0, i;
    cout<<"\n Enter array size : ";
    cin>>arr_size;
    int arr[arr_size];
    for(i=0; i<arr_size; i++){
        system("cls");
        cout<<"\n Enter "<< i+1 <<" no. element : ";
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
            if((arr[i]%2)==0){
                even++;
            } else if((arr[i]%2)!=0){
                odd++;
            }
        } else if((arr[i]%2)==0){
            even++;
        } else if((arr[i]%2)!=0){
            odd++;
        }
    }
    system("cls");
    cout<<"\n\n Array : ";
    for(i=0; i<arr_size; i++){
        cout<<" "<< arr[i] <<",";
    }
    cout<<"\b.\n\n";
    cout<<" This array has "<<neg<<" negative, "<<even<<" even and "<<odd<<" odd numbers.\n\n";
    return 0;
}
