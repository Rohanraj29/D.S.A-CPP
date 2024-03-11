//WAP TO FIND CIRUMFERENCES OF CIRCLE.
#include<iostream>
using namespace std;
int main()
{
    const int pi=3.14;
    int radius;
    float circumference;
    cout<<"Enter radius:-";
    cin>>radius;
    circumference=2*pi*radius;
    cout<<"Circumference of circle is:-"<<circumference;
    return 0;
}