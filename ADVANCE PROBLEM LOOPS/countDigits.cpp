//WAP to count digits of a given number;
#include<iostream>
using namespace std;
int main()
{
    int num=8888;
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}