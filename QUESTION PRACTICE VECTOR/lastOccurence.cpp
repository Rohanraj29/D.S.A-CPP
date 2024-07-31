// Find the last occurrence of x in the array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int index;
    int number;
    vector<int>r;
    r.push_back(2);
    r.push_back(4);
    r.push_back(6);
    r.push_back(2);
    r.push_back(8);
    cout<<"Enter the number:-";
    cin>>number;
    for(int i=0;i<r.size();i++){
           if(r[i]==number){
            index=i;
           }
    }
    cout<<"Last occurence of given number in array at index:-"<<index;
    return 0;

}