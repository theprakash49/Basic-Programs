#include <iostream>
using namespace std;

// calculating simple interest
int main(){
    float principal,rate,time,simpleInterest;
    principal = 4000;
    rate = 2.6;
    time = 2;
    simpleInterest = (principal * rate * time)/100;
    cout << simpleInterest << endl;
    return 0;
}