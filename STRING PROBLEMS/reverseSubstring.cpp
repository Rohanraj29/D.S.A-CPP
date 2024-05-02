//WAP TO REVERSE STRING FROM INDEX 2 TO 5 USING INBUILT FUNCTIONS.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string Greater than 5 character:-";
    getline(cin,a);
    string r=a.substr(2,5);
    cout<<"String from position 2 to 5 are:-"<<r;
    return 0;
}