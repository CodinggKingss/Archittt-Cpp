#include <iostream>
using namespace std;

int main(){

int N;
cout<<"Enter the Number"<<endl;
cin>>N;

int evensum=0;
int oddsum=0;

while (N>0){

   int last = N%10;
   if (last%2==0){
    evensum = evensum+last;
   }
   else {
    oddsum = oddsum+last;
   }
N = N/10;
}

cout<<"Even Digit Sum is "<<evensum<<endl;
cout<<"Odd Digit Sum is "<<oddsum<<endl;


}