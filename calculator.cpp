#include <iostream>
using namespace std;

int main(){
    int a,b;
    char sym;
    cout << "enter two numbers and operations(+,-,*,/) : ";
    cin >> a >> b >> sym;
    switch(sym){
        case '+':
            cout << "sum : " << a + b << endl;
            break;
        case '-':
            cout << "sub : " << a - b << endl;
            break;
        case '*':
            cout << "mul : " << a * b << endl;
            break;
        case '/':
            cout << "div : " << a / b << endl;
            break;
        default : 
            cout << "Invalid operator!" << endl;
    }
    return 0;
}