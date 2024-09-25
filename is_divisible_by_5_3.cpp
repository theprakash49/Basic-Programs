#include <iostream>
using namespace std;

/*
    Take positive integer input and tell if it is divisible by 
    5 and 3.
*/

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n % 5 == 0 && (n % 3 == 0) ){
        cout << n << " is divisible by 5 & 3" << endl;
    }else{
        cout << n << " is not divisible by 5 & 3" << endl;
    }
    return 0;
}