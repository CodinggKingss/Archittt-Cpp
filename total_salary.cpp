#include <iostream>
using namespace std;

int main() {

    double basic, hra, da, allow, pf, total;
    char grade;
    cout<<"Enter Basic Salary and Gradepay"<<endl;
    cin>>basic;
    cin>>grade;

    hra = 0.2*basic;
    da = 0.5*basic;
    pf = 0.11*basic;

    if (grade =='A'){
     allow = 1700;
    }
    else if (grade =='B'){
        allow = 1500;
    }
    else {allow = 1300;
    }

    total = basic+hra+da+allow-pf;
    
    cout<<total<<endl;


}