#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    bool divided = false;
for (int d = 2; d<n; d++){
    if(n%d==0){
        divided = true;
    }
}
if (divided){
    cout<<"Not Prime"<<endl;

}else {
    cout<<"Prime"<<endl;
}