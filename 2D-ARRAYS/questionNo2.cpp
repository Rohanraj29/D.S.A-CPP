//Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int max=a[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Array elements are:-"<<a[i][j]<<endl;
        }
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
      }
      cout<<"Largest element in 2 D-Array is:-"<<max;
      return 0;
}
