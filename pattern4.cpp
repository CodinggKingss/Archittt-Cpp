#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    int var =1;
    while(i<=n){int j=1;
    while(j<=i){
        cout<<var;
        j=j+1;
    }
    var=var+1;
    cout<<endl;
    i=i+1;
    }
}