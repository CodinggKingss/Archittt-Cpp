#include <iostream>
using namespace std;

int main(){

int N;
cout<<"Enter N"<<endl;
cin>>N;

int i=1;

while (i<=N){
    int j = 1;
    while(j<=N){
        cout<<"*";
        j++;

    }
    cout<<endl;
    i++;
}
    
}