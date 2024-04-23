//Write a program to print the transpose of the matrix entered by the user and store it in a new  matrix. 
#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={1,2,3,4};
    int transpose[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            transpose[i][j]=a[j][i];
            cout<<transpose[i][j]<<endl;
        }
    }
    return 0;
}