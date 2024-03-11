//WAP TO CALCULATE THE AREA OF CIRCLE.
#include<iostream>
using namespace std;
int main()
{
    const float pi=3.14;
    int radius;
    float area;
    cout<<"ENTER THE RADIUS:-";
    cin>>radius;
    area=pi*(radius*radius);
    cout<<"Area of circle is :-"<<area;
    return 0;
}