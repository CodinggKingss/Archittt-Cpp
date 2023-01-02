#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int n1 = n+1/2;
    int n2 = n1-1;

     int i = 1;
     while(i<=n){
        int spaces = 1;
        while(spaces <= n-i){
            cout<<" ";
            spaces = spaces + 1;
        }
        int star = 1;
        while(star <= 2*i-1){
            cout<<"*";
            star = star + 1;
        }
        cout<<endl;
        i++;
        }
        int j = n2;
        int x = 1;
     while(j>=1){
        int spaces = 1;
        while(spaces<=x){
            cout<<" ";
            spaces = spaces + 1;
        }
        int star = 1;
        while(star<=2*j-1){
            cout<<"*";
            star = star + 1;
        }
        cout<<endl;
        j--;
        x++;
     }
     }