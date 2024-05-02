//WAP TO UPDATE ALL THE EVEN INDEX OF AN STRING TO A.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string:-";
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a[i]%2==0){
            a[i]='a';
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<"Updated even index of an string are:-"<<a[i];
    }
    return 0;
}