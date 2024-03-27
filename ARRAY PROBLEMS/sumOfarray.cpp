#include<iostream>
using namespace std;
int main()
{
    int a[4]={18,18,18,18};
    int sum;
    for(int i=0;i<4;i++){
        sum=sum+a[i];
    }
    cout<<"Sum of array is " <<sum;
    return 0;
}