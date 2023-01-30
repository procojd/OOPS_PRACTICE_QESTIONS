// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter
#include<iostream>
using namespace std;
class Triangle{
    public:
    int s1,s2,s3;
    Triangle(int s ,int t , int u){
        s1=s;
        s2=t;
        s3=u;

    }
    int perimeter()
    {
        return s1+s2+s3;
    }
    int area()
    {
        // using heron formula
    }
};

int main()
{
    Triangle t1(3,4,5);
    cout<<t1.perimeter();
    return 0;
}