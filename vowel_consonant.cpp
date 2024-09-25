#include <iostream>
using namespace std;

/*
    wap to check whether a given character is a vowel or a consonant.
*/

int main(){
    char ch;
    cout << "enter the character : ";
    cin >> ch;
    int ascii_vl = (int)ch;
    if((ascii_vl >= 97 && ascii_vl <= 122) || (ascii_vl >= 65 && ascii_vl <= 90)){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            cout << "Vowel" << endl;
        }else{
            cout << "Consonant" << endl;
        }
    }
    return 0;
}