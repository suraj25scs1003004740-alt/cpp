#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
   int x=0;
   while(n!=0){
    n=n/10;
    x++;
   }
   cout<<x;
}