#include<iostream>
using namespace std;
int main(){
    int a[4] = {88,98,55,68};
    int max = a[0]; 
    for (int i= 0;i< 5; i++)
    {
       if (max<a[i])
       {
        max=a[i];
       }
        else
        continue;  
    }
     cout<<"Maximum value of array element is :"<<max;
    return 0;
}