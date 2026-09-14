#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;
    
   cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}