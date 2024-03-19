//WAP to find the factorial of given number.
#include<iostream>
using namespace std;
int main()
{
    int number;
    int product=1;
    cout<<"Enter number:-";
    cin>>number;
    for(int i=1;i<=number;i++){
        product=i*product;
    }
    cout<<"Factorial of"<<number <<product;
    return 0;
} 