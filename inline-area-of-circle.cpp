#include<iostream>
using namespace std;

inline float circle_area(float r)
{
    return (3.1416*r*r);
}
int main()
{
    float r;
    cout<<"\n Enter radius : ";
    cin>>r;
    cout<<"\n Area of the circle is : "<<circle_area(r)<<" square unit."<<endl;
    return 0;
}
