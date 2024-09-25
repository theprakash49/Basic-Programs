#include <iostream>
using namespace std;

/*
    Take positive integer input and tell if it is divisible
    by 5 or 3 but not divisible by 15.
*/

int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;
    if((num % 5 == 0 || num % 3 == 0) && (num % 15 != 0)){
        cout << num << " is divisible by 5 or 3, but not 15" << endl; 
    }else{
        cout << "Not maching condition!" << endl;
    }
    return 0;
}