#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer : ";
    int n;
    cin>>n;

    if(n%5==0 and n%3==0){
        cout<<"Divisible by 5 and 3";
    }
    else{
        cout<<"Not";
    }
}