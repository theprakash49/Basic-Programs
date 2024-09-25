#include <iostream>
using namespace std;

/*
    print all alphabets(uppercase) with their ASCII values.
*/

int main(){
    char ch = 'A';
    int a = 1;
    while(a <= 26){
        cout << ch << " : " << (int)ch << endl;
        a += 1;
        ch += 1;
    }
    return 0;
}