//Write a program to print sum of all the  elements of a 2D matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int sum;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum=sum+a[i][j];
        }
    }
    cout<<sum;
    return 0;
}
