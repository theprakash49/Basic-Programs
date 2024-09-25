#include <iostream>
using namespace std;

/*
    Take 2 integers input and print the greatest of them.
*/

int main(){
    int a,b;
    cout << "enter two numbers : ";
    cin >> a >> b;
    if(a > b){
        cout << a << " is greatest" << endl;
    }else{
        cout << b << " is greatest" << endl;
    }
    return 0;
}