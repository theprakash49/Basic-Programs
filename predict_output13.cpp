#include <iostream>
using namespace std;

/*
    predict the output
*/

int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != (2 < 5) ? 20 : 30;
    cout << "Value of x : " << x << endl; // 30
    return 0;
}