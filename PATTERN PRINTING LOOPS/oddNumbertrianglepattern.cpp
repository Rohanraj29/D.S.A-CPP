#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
            if(j%2!=0){
            cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}