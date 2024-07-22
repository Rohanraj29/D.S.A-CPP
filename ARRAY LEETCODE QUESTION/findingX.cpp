// WAP TO FIND THE X ELEMENT IN AN ARRAY. TAKE INPUT FROM THE USER IN X VARIABLE.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int x;
    int f=0;
    cout<<"Enter the element that you want to search:-";
    cin>>x;
    for(int i=0;i<4;i++){
        if(a[i]==x){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Element found in an array";
    }
    else{
        cout<<"Element not found in an array";
    }
    return 0;
}