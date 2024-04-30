//WAP TO FIND THAT ELEMENT IS SORTED OR NOT.
#include<iostream>
using namespace std;
int main()
{
    int a[4]={12,4,6,8};
    for(int i=0;i<4;i++){
        if(a[i]>a[i+1]){
            cout<<"Not sorted";
            break;
        }
        else{
            cout<<"Sorted Elements";
            break;
        }
    }
    return 0;
}