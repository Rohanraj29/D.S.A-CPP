// WAP TO FIND TWO SUM IN AN ARRAY.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int target=10;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]+a[j]==target){
                cout<<i <<" " <<" "  <<j<<endl;
            }
        }
    }
    return 0;
}