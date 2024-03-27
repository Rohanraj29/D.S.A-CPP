#include<iostream>
using namespace std;
int main()
{
    int a;
    int search=a;
    cout<<"Enter the number in a:-";
    cin>>a;
    for(int i=0;i<=a;i++){
        if(search==a){
            search=a;
        }
        cout<<search;
    }
}