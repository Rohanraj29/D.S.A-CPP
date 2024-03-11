//WAP TO CALCULATE THE PERCENTAGE OF 5 SUBJECTS.
#include<iostream>
using namespace std;
int main()
{
int maths;
int science;
int english;
int hindi;
int computer;
float percentage;
cout<<"Enter the marks of maths:- ";
cin>>maths;
cout<<"Enter the marks of science:- ";
cin>>science;
cout<<"Enter the marks of english:- ";
cin>>english;
cout<<"Enter the marks of hindi:- ";
cin>>hindi;
cout<<"Enter the marks of computer:- ";
cin>>computer;
percentage=(maths+science+english+hindi+computer)/5;
cout<<"Percentage of 5 subject is "<<percentage;
return 0;
}