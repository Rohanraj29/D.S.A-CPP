// Find the maximum value out of all the elements in the array.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int max=a[0];
    for(int i=0;i<4;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
      cout<<max;
}