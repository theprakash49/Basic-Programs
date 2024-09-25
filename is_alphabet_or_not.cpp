#include <iostream>
using namespace std;

/*
    Wap to check whether a character is an alphabet or not.
    character    ascii_point
    -------      --------------
    a            97
    z            122
    A            65
    Z            90
*/

int main(){
    char c;
    cout << "enter a character : ";
    cin >> c;
    int ascii = (int)c;
    if( (ascii >= 65 && ascii <=90) || (ascii >= 97 && ascii <= 122) ){
        cout << c << " is alphabet" << endl;
    }else{
        cout << c << " is not alphabet" << endl;
    }
    return 0;
}