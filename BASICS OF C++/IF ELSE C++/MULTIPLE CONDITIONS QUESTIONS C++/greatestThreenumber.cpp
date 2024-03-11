#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the value of a:-";
    cin>>a;
    cout<<"Enter the value of b:-";
    cin>>b;
    cout<<"Enter the value of c:-";
    cin>>c;
    if(a>b && a>c){
        cout<<"Greatest number is a:-"<<a;
    }
    else
    if(b>a && b>c){
        cout<<"Greatest number is b:-"<<b;
    }
    else{
        cout<<"Greatest number is c:-"<<c;
    }
    return 0;
}