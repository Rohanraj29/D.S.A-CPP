// Find the doublet in the Array whose sum is equal to the given value x. (LeetCode - 1) (Two Sum)
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&r,int target){
    for(int i=0;i<r.size();i++){
        for(int j=i+1;j<r.size();j++){
            if(r[i]+r[j]==target){
                cout<<i<<" "<<j<<" ";
            }
        }
    }
}
int main()
{
vector<int>r;
r.push_back(2);
r.push_back(4);
r.push_back(6);
r.push_back(8);
int target=10;
display(r,target);
return 0;
}