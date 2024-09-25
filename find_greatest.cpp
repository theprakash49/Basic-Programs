#include <iostream>
using namespace std;

/*
    Take 3 positive integers input and print the greatest of them.
*/
int main(){
    int a,b,c;
    cout << "enter 3 numbers : ";
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
            cout << a << " is greatest" << endl;
        }else{
            cout << c << " is greatest" << endl;
        }
    }else{
        if(b > c){
            cout << b << " is greatest" << endl;
        }else{
            cout << c << " is greatest" << endl;
        }
    }
    return 0;
}