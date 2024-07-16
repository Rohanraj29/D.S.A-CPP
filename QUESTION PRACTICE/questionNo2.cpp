// Calculate the sum of all the elements in the given array
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+a[i];
    }
    cout<<"Sum of all elements of an array are:-"<<sum;
    return 0;
}