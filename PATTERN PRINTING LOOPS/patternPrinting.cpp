//1 2 3 4
//1 2 3
//1 2
//1
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        int a=1;
        for(int j=i;j<=4;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}