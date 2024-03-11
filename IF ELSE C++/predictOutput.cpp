#include<iostream>
using namespace std;
int main()
{
    const float pi=3.14;
    int radius=6;
    float area;
    float circumference;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"Area of circle is "<<area<<endl;
    cout<<"Circumference of circle is "<<circumference<<endl;
    if(area>circumference){
        cout<<"Area of circle is larger than circumference of circle";
    }
    else{
        cout<<"Circumference of circle is greater than area of circle";
    }
}