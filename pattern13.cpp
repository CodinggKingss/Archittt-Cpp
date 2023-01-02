#include <iostream>
using namespace std;

int main(){
 int n;
cout<<"enter n"<<endl;

cin>>n;

int i=1;


while (i<=n){
    int j=1;
    
   char ch = 'A';
    while(j<=i){
        
        
        cout<<ch;
        ch=ch+1;
        j++;
      
       
    }
    cout<<endl;
i++;


}

}