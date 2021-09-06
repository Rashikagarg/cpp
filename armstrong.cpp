#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,m;
    cout<<"Enter the no.";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;  
    }
    if(sum==m){
    cout<<"no. is armstrong";
    }
    else{
    cout<<"no. is not armstrong";
    }
    return 0;
}