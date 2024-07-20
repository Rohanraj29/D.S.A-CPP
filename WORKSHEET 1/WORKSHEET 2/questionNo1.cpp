// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int product=1;
    cout<<"Product of all elements in an array are:-";
    for(int i=0;i<4;i++){
        product=product*a[i];
    }
    cout<<product;
    return 0;
}