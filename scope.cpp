#include <iostream>
using namespace std;

int main(){

int n=4;
cout<<"enter N"<<endl;
//cin>>n;

int i = 1;
while(i<=n){
    int spaces = 1;
    while(spaces<=n-i){
        cout<<' ';
        spaces++;
    }
    int j = 1;
    while(j<=2*i-1){
        cout<<j;
        j++;
    }
    cout<<endl;
    i = i + 1;
}

}