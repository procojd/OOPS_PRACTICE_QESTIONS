// Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. (just to make you familiar with initialization lists)
#include<iostream>
using namespace std;

class volume{
    private:
    int x,y,z;
    public:
volume(int i,int j,int k):x(i),y(j),z(k){
    cout<<x*y*z;
};
};
int main()
{
    volume v(10,20,30);


}