// WAP TO FIND THE LAST OCCURENCE OF AN ARRAY.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={2,2,4,6};
    int target=2;
    int index=-1;
    for(int i=0;i<4;i++){
        if(a[i]==target){
            index=i;
        }
    }
    cout<<"Last occurence at index "<<index;
    return 0;
}