// Write a program that declares an array of size 5, takes input from the user to fill the array, and prints the array elements in reverse order.
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Array elements are:-"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Array elements after reversing:-"<<endl;
    for(int i=4;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0; 
}