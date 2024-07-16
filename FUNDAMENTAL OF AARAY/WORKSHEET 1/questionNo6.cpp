// Given an array int arr[5] = {10, 20, 30, 40, 50};, write the code to access and print the third element.
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    cout<<"Array elements are:-"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Third element in an array are:-"<<arr[2];
    return 0;
}