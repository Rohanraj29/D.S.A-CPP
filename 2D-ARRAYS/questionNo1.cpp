//Write a program to store roll number and  marks obtained by 4 students side by side in a matrix.[2]
#include<iostream>
using namespace std;
int main()
{
    int a[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter roll number and marks of student" <<i;
            cin>>a[i][j];
        }
    }
       for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
        }
    }
    return 0;
}