#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i || i+j==n+1){
                    cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}