#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter the no.";
    cin>>no;
    for(int i=1;i<=9;i++){
        if(no%i==0)
        cout<<i<<endl;
    }
    return 0;
}