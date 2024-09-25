#include <iostream>
using namespace std;

// wap to take positive integer input and tell if it is 
// divisible by 5 or not
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n % 5 == 0){
        cout << "Divisible by " << 5 << endl;
    }else{
        cout << "Not divisible by " << 5 << endl;
    }
    return 0;
}