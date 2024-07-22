// WAP TO FIND DUPLICATES ELEMENT IN AN ARRAY.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,6};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                cout<<"Duplicate element found at index "<<i;
            }
        }
    }
    return 0;
}