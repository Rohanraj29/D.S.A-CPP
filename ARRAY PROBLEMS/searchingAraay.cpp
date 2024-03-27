#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int element;
    for(int i=0;i<4;i++){
        cout<<"Enter element at index:-" <<i;
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        cout<<"Element are "<<a[i]<<endl;
    }
    cout<<"Enter the element to search ";
    cin>>element;
    for(int i=0;i,4;i++){
        if(a[i]==element){
            cout<<"Element found at index "<<i;
        }
    }

}