// Find the second largest element in the given Array
#include <iostream>
using namespace std;
int main()
{
    int a[4]={12,18,20,22};
    for(int i=0;i,4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"2nd largest element are:-"<<a[1];
    return 0;
}