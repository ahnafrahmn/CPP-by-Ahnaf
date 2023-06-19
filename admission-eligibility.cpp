#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;

int main()
{
    float maths, phy, chem, result;
    start:
    cout<<"\n Enter your marks of MATH, PHYSICS, CHEMISTRY \n : ";
    cin>>maths>>phy>>chem;
    result = maths+phy+chem;
    if((result>=180 && maths>=65 && phy>=55 && chem>=50)||(maths+phy >= 140)){
        cout<<"\n Congratulations !!\n You are eligible for admission.\n\n";
    } else if(maths<0 || phy<0 || chem<0){
        cout<<"\n Invalid Input.\n\n";
        sleep(1.75);
        system("cls");
        goto start;
    } else{
        cout<<"\n Sorry, you are not eligible for admission. \n";
    }
    return 0;
}
