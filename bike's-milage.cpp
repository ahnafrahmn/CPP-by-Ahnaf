/*
    This is a program to calculate a bike's mileage from given distance (in km)
    and amount of fuel (in liters) user have used.
*/
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int distance;
    float liters, mileage;

    cout<<"\n Enter the distance (in km): ";
    cin>>distance;
    cout<<"\n Enter liters of fuel you have used (in liters): ";
    cin>>liters;
    mileage = distance/liters;
    cout<<setprecision(2)<<fixed;
    cout<<"\n Your mileage is "<< mileage <<" km per liter.\n";
    return 0;
}
