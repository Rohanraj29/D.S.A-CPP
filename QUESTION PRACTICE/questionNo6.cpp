// Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int a[4];
    int count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter the element:-";
    cin>>x;
    for(int i=0;i<4;i++){
        if(a[i]>x){
            count++;
        }
    }
    cout<<count;
    return 0;
}