#include <iostream>
using namespace std;

void increment(int a){
  a = a + 1;
}

int main(){
  int n = 10;
  increment(n);
  cout<<n<<endl;
}
