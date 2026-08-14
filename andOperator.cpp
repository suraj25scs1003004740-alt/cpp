#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"the number is divisible by 5 and 3";
    }
    else{
        cout<<"the number is not divisible by 5 and 3";
    }

    return 0;
 }