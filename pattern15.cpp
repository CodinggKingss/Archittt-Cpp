#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter n"<<endl;
cin>>n;

int i = 1;

while(i<=n){
    int spaces = 1;
    while (spaces<=n-i){
        cout<<' ';
        spaces = spaces+1;

    }
    int val = 1;
    while(val<=i){
        cout<<val;
       val = val+1;
    }
    cout<<endl;
    ++i;
}

}
