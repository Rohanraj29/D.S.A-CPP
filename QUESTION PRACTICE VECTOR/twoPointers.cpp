// Two Pointers : Write a program to reverse the array without using any extra array.
#include <iostream>
#include <vector>
using namespace std;
void show(vector<int>&r){
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
}
int main()
{
    vector <int>r;
    r.push_back(2);
    r.push_back(4);
    r.push_back(6);
    r.push_back(8);
    r.push_back(10);
    show(r);
    int h=0;
    int m=r.size()-1;
    while(h<=m){
        int temp=r[h];
        r[h]=r[m];
        r[m]=temp;
        h++;
        m--;
    }
    show(r);
    return 0;
}