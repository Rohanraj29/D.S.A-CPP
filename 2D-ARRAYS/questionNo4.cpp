//Write a program to add two matrices.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int result[2][2];
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=a[i][j]+b[i][j];
        }
}
  for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<result[i][j]<<endl;
        }
}
return 0;
}