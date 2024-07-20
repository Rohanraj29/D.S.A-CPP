// Find the minimum value out of all elements in the array.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int min=a[0];
    for(int i=0;i<4;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"Minimum element in a given array are:-"<<min;
    return 0;
}
