// WAP TO FIND THE LENGTH OF AN ARRAY.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int length=sizeof(a)/sizeof(int);
    cout<<"Length of an array are:-"<<length;
    return 0;
}