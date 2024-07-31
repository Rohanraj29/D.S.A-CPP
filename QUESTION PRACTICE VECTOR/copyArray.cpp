//  Write a program to copy the contents of one array into another in the reverse order.
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
 vector<int> v1;
    
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(2);
    vector<int> v2(v1.size());
    for(int i=0;i<=v1.size();i++)
    {
        v2[i]=v1[v1.size()-i-1];
    }
    cout<<"Orignal array:-";
    show(v1);
    cout<<endl;
    cout<<"Copy array:- ";
    show(v2);
    return 0;
}