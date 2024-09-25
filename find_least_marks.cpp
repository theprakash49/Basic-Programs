#include <iostream>
using namespace std;

/*
    If the marks of A,B and C are input through the keyboard, wap to
    determine the student scoring least marks.
*/

int main(){
    int a,b,c;
    cout << "enter marks : ";
    cin >> a >> b >> c;
    if(a <= b && a <= c){
        cout << "Leat : " << a << endl;
    }else if(a >= b && c >= b){
        cout << "Least : " << b << endl;
    }else{
        cout << "Least : " << c << endl;
    }
    return 0;
}