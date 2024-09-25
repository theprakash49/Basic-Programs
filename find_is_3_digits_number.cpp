#include <iostream>
using namespace std;

/* 
    Take positive integer input and tell if it is a three
    digit number or not. 
*/
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n >= 100 && n <= 999){
        cout << n << " is 3 digit" << endl;
    }else{
        cout << n << "is not 3 digit!" << endl;
    }
    return 0;
}