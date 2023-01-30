// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;
class area{
    private:
    int a;
    int b;
    public:
    area(int a,int b){
        this->a=a;
        this->b=b;
        cout<<area1(a,b);
    };
     int area1(int a,int b)
     {return a*b;

     }

};
int main()
{
    area a(4,5);
}