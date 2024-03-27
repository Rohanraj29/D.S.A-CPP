#include<iostream>
using namespace std;
int main()
{
    int a[4]={34,88,99,98};
    int sum;
    for(int i=0;i<4;i++){
        if(a[i]<35){
            cout<<i;
        }
    }
    return 0;
}