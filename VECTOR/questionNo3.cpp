// Write a program that takes n integers as input from the user and stores them in a vector.Print the vector using a loop.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}