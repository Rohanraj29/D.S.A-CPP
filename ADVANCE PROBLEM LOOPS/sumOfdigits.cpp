//WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:-";
    cin>>num;
    int sum=0;
    while(num>0){
        int lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    }
    cout<<sum;
    return 0;
}