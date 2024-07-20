// Given an array arr. Your task is to find the elements whose value is equal to that of its index value.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,3};
    int f=0;
    for(int i=0;i<4;i++){
        if(a[i]==i){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Value equal to an index";
    }
    else{
        cout<<"Value not equal to an index";
    }
    return 0;
}