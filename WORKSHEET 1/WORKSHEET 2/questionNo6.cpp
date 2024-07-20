// Given a stream of incoming numbers, find average or mean of the stream at every point.
#include <iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+a[i];
        cout<<sum/(i+1)<<endl;
    }
    return 0;
}