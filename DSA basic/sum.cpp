#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i=1;
    cout<<"enter the value"<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;
}