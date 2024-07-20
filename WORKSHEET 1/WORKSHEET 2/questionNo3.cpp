// Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={24,24,6,8};
    int f=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                f=1;
            }
        }
    }
    if(f==1){
        cout<<"Duplicate element found";
    }
    else{
        cout<<"Duplicate element not found";
    }
    return 0;
}