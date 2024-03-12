#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter the number that you want to print table:-";
    cin>>n;
    for(int i=0;i<=10;i++){
        m=n*i;
        cout<<m;
    }
}