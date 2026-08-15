#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;

    cout<<"enter the second number"<<endl;
    cin>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else{
        cout<<b<<" is greater"<<endl;
    }
    return 0;
}