// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.
#include<iostream>
using namespace std;

class average{
public:
 static void calav(int a,int b,int c);
};
void average::calav(int a,int b,int c){
    cout<<(a+b+c)/3;
    }


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    average::calav(a,b,c);

}