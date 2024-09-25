#include <iostream>
using namespace std;

/*
    Display this GP : 2,4,8,16,32,... upto 'n' terms
*/

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int a = 2;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a = a * 2;
    }
    cout << endl;
    return 0;
}