#include<iostream>
using namespace std;
int main(){
    int no,sum=0;
    cout<<"enter the number";
    cin>>no;
    for(int i=1;i<=9;i++){
        if(no%i==0)
        sum+=i;
    }
    if(2*no==sum){
        cout<<"no. is perfact number";
    }
    else{
cout<<"no.is not perfact number";
    }
    
    return 0;
}