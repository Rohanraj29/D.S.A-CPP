#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:-";
    cin>>num;
    if(num%5==0){
        cout<<"Number is Divisible by 5";
    }
    else{
        cout<<"Number is not divisible by 5";
    }
    return 0;
}