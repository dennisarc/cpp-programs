#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n>0){
        cout<<n<<" is postive number"<<endl;
    }
    else if(n<0){
        cout<<n<<" is negative number"<<endl;
    }
    else{
        cout<<n<<" it's zero"<<endl;
    }
}