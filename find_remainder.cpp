#include <iostream>
using namespace std;

// wap to take input, a & b, if (a > b) find the remainder when `a` is divided by `b`.
int main(){
    int a,b;
    /*
        int a,b;
        where :
        a -> is dividend
        b -> is divisor
    */
    cout << "Enter two number : ";
    cin >> a >> b;
    if(a > b){
        int quotient = a / b;
        int remainder = a - (b * quotient);
        cout << "Remainder is : " << remainder << endl;
    }else{
        cout << "Dividend must be bigger than divisor" << endl;
    }
    return 0;
}