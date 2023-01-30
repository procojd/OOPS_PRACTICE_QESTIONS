// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
#include<string.h>
using namespace std;

class Student{
public:
string name;
int roll_no;
Student(){
    name="john";
    roll_no=2;

}
};
int main()
{
    Student stu;
    cout<<stu.name<<stu.roll_no;

}
