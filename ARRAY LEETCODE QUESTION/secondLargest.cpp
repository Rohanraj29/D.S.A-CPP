// WAP TO FIND 2ND LARGEST ELEMENT IN AN ARRRAY.
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
vector<int>r(4);
int n=r.size();
for(int i=0;i<4;i++){
    cin>>r[i];
}
sort(r.begin(),r.end());
for(int i=0;i<4;i++){
    cout<<r[i]<<endl;
}
  cout<<r[2];
    return 0;
}