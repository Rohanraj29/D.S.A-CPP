#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<ch<<" is an Alphabet";
    }
    else{
        cout<<ch<<" isn't an Alphabet";
    }
    return 0;
}