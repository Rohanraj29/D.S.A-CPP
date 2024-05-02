//WAP TO COUNT THE NUMBER OF VOWELS IN A STRING.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a;
cout<<"Enter the string:-";
getline(cin,a);
int count=0;
for(int i=0;i<a.length();i++){
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' ){
        count++;
    }
}
cout<<"Number of vowels in a given string:-"<<count;
return 0;
}