// Implement a program that initializes an empty vector of integers. Use a loop to add the numbers from 1 to 10 to the vector using push_back.After each addition, print the current size and capacity of the vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>r;
    for(int i=0;i<9;i++){
        r.push_back(i+1);
        cout<<"Element:-"<<r[i]<<endl;
        cout<<"Size:-"<<r.size()<<endl;
        cout<<"Capacity:-"<<r.capacity()<<endl;
    }
    return 0;
}