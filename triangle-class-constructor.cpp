#include<iostream>

using namespace std;

/*

Create a class named "Triangle" with two private data members- 'base' and 'height' and a function Area() to calculate the area which is '0.5*base*height".
The class has three constructors which are:

1.having no parameter - values of both base and height are assigned zero.
2. having two numbers as parameters the two numbers are assigned as base and height respectively.
3.having one number as parameter - both base and height are assigned that number.

Now, create objects of the 'Triangle' class having none, one and two parameters and print their areas.

*/


class Triangle
{
      float base, height;
public:
      Triangle()
      {
            base = 0;
            height = 0;
      }
      Triangle(float a, float b)
      {
            base = a;
            height = b;
      }
      Triangle(float a)
      {
            base = a;
            height = a;
      }
      double Area()
      {
            return (0.5*base*height);
      }
};

int main(){
      Triangle obj1, obj2(5, 6), obj3(4);
      cout<<"\n Area : "<<obj1.Area()<<endl;
      cout<<"\n Area : "<<obj2.Area()<<endl;
      cout<<"\n Area : "<<obj3.Area()<<endl;
      return 0;
}
