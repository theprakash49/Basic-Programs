#include <iostream>
using namespace std;

/*
    wap to input any character and check whether it's the alphabet,
    digit or special character.
*/

int main(){
    char ch;
    cout << "enter a character : ";
    cin >> ch;
    int ascii_vl = (int)ch;
    if(ascii_vl >= 97 && ascii_vl <= 122){
        cout << "Small Alphabet" << endl;
    }else if(ascii_vl >= 65 && ascii_vl <= 90){
        cout << "Capital Alphabet" << endl;
    }else if(ascii_vl >= 48 && ascii_vl <= 57){
        cout << "Digit" << endl;
    }
    return 0;
}