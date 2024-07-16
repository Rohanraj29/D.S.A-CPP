// Find the element x in the array . Take array and x as input
#include <iostream>
using namespace std;
int main()
{
    int a[4];
    int search;
    int f=1;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    cout<<"Array elements are:-"<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<"enter the element to search in an array:-";
    cin>>search;
    for(int i=0;i<4;i++){
        if(a[i]==search){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}