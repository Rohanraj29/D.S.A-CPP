#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int product;
    int *ptr1,*ptr2;
    cout<<"Enter the value of a:-";
    cin>>a;
    cout<<"Enter the value of b:-";
    cin>>b;
    ptr1=&a;
    ptr2=&b;
    product=a*b;
    cout<<"Product of two number is "<<product;
    return 0;
}
