// Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int x;
    int count=0;
    cout<<"Enter the value of x:-";
    cin>>x;
    for(int i=0;i<4;i++){
        if(a[i]>x){
            count++;
        }
    }
    cout<<"Value greater than X are:-"<< count;
     return 0;
}