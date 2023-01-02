#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter n"<<endl;
cin>>n;

int i=1;

while(i<=n){
    int spaces=1;
    while(spaces<=n-i){
        cout<<' ';
        spaces=spaces+1;
    }
    int num =1;
    while(num<=i){
        cout<<num;
        num++;
    }
    num=i-1;
    while(num>=1){
        cout<<num;
        num--;
    }
    cout<<endl;
    i++;
}

}