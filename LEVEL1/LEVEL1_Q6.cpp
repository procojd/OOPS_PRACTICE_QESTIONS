//Add two distances in inch-feet by creating a class named 'AddDistance'

#include<iostream>
using namespace std;
class addistance{
    int inch;float feet;
    public:
    addistance(float feet1,int inch1):feet(feet1),inch(inch1){
        float rem=inch%12;
        int div=inch/12;
        rem/=100;
        feet+=div;
        feet+=rem;
        cout<<feet;
    }
};
int main()
{
    addistance d(11,13);
}