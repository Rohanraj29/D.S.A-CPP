// Implement a program that takes n integers as input from the user, stores them in a vector, and sorts the vector in ascending order using the sort function
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<=4;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=4;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}