#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int sum;
    int *ptr1,*ptr2;
    cout<<"Enter the value of a:-";
    cin>>a;
    cout<<"Enter the value of b:-";
    cin>>b;
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    cout<<"Sum of two number is "<<sum;
    return 0;
}