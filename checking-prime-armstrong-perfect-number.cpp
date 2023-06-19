#include<iostream>
#include<cmath>
using namespace std;

int global_sample;

void armstrong(int num)
{
    int mainNum, remainder, n = 0;
    float result = 0.0;

    mainNum = num;

    for (mainNum = num; mainNum != 0; ++n) {
        mainNum /= 10;
    }
    for (mainNum = num; mainNum != 0; mainNum /= 10) {
        remainder = mainNum % 10;

        result += pow(remainder, n);
    }

    if ((int)result == num) {
        cout<<" "<<num<<" is an Armstrong number.\n";
    }
}

int prime()
{
    int num=global_sample, i, prime=0;
    if ((num == 1) || (num == 0)){
        return 0;
    }
    for(i=2; i<num; i++){
        if(num%i==0){
            prime++;
            break;
        }
    }
    if (prime!=1){
        cout<<" "<<num<<" is a prime number.\n";
    }
}

void perfect()
{
    int a=global_sample, b=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            b += i;
        }
    }
    if(b==a){
        cout<<" "<<a<<" is a perfect number.\n";
    }
}
int main()
{
    int sample;
    cout<<"\n Enter a number : ";
    cin>>sample;
    cout<<"\n\n";
    global_sample = sample;
    armstrong(sample);
    prime();
    perfect();
    return 0;
}
