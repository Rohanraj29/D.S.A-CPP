// WAP TO COUNT THE ELEMENTS IN AN ARRAY GREATER THEN X.
#include <iostream>
using namespace std;
int main()
{
    int a[4]={1,5,2,8};
    int x;
    int count;
    cout<<"Enter the elements:-";
    cin>>x;
    for(int i=0;i<4;i++){
       if(a[i]>x){
        count++;
       }
    }
    cout<<"Array elements greater then X are:-"<<count;
    return 0;
}