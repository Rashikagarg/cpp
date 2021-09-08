#include<iostream>
using namespace std;
int main(){
int no,fact=1;
cout<<"enter a no.";
cin>>no;
for(int i=1;i<=no;i++){
    fact=fact*i;
}
cout<<fact;
return 0;
}