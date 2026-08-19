#include<iostream>
using namespace std;
int main()
{
    int n,cols;
    cout<<"enter the rows: ";
    cin>>n;
    cout << "Enter number of columns: ";
    cin >> cols;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==cols){
        cout<<"*";} else{
            cout<<" ";
        }      
           
    }
   
    cout<<endl;
}
   
}