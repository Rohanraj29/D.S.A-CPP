// WAP TO FIND AVERAGE OF EACH NUMBER AT EACH INDEX.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={10,20,30,40};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+a[i];
        cout<<sum/(i+1)<<" ";
    }
    return 0;
}