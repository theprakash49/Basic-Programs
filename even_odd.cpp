#include <iostream>
using namespace std;

// wap to take positive integer input and tell if it is even or odd
int main(){
    int n;
    cout << "enter a integer number : ";
    cin >> n;
    if(n % 2 == 0){
        cout << n << " is even number" << endl;
    }else{
        cout << n << " is odd number" << endl;
    }
    return 0;
}