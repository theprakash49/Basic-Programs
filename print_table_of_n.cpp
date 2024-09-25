#include <iostream>
using namespace std;

/*
    Print the table of `n`. Here `n` is an integer
    which the user will input.
*/

int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    for(int i = n; i <= n * 10; i++){
        if(i % n == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}