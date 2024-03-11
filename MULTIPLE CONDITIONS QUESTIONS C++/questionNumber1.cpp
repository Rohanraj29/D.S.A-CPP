#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number:-";
    cin>>number;
    if(number>0&&number<=999){
        cout<<"It's a three digit number";
    }
    else{
        cout<<"It's a four digit number";
    }
    return 0;
}