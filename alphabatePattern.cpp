#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the rows: ";
    cin>>n;
    cout<<"enter the cols: ";
    cin>>x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
        cout<<(char)(j+64)<<" ";
        
           
    }
   
    cout<<endl;
}
   
}