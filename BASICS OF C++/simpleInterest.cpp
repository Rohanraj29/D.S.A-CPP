//WAP TO FIND SIMPLE INTEREST;
#include<iostream>
using namespace std;
int main()
{
    int principle;
    float rate;
    float time;
    float simple_interest;
    cout<<"Enter the principle:-";
    cin>>principle;
    cout<<"Enter the rate:-";
    cin>>rate;
    cout<<"Enter the time:-";
    cin>>time;
    simple_interest=(principle*rate*time)/100;
    cout<<"Simple interest:-"<<simple_interest;
    return 0;
}